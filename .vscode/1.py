from pptx import Presentation
from pptx.util import Inches, Pt
from pptx.enum.text import PP_ALIGN

def create_presentation():
    # 1. Create a presentation object
    prs = Presentation()

    # Helper function to add a slide with title and bullet points
    def add_bullet_slide(presentation, title_text, content_list):
        slide_layout = presentation.slide_layouts[1] # 1 is 'Title and Content'
        slide = presentation.slides.add_slide(slide_layout)
        
        # Set Title
        title = slide.shapes.title
        title.text = title_text
        
        # Set Content
        tf = slide.placeholders[1].text_frame
        tf.clear()  # clear existing placeholder
        
        for item in content_list:
            p = tf.add_paragraph()
            p.text = item
            p.level = 0
            # Optional: Add spacing or resizing here

    # --- SLIDE 1: Title Slide ---
    slide_layout = prs.slide_layouts[0] # 0 is 'Title Slide'
    slide = prs.slides.add_slide(slide_layout)
    title = slide.shapes.title
    subtitle = slide.placeholders[1]
    
    title.text = "Booch Me"
    subtitle.text = "The Object-Oriented Methodology by Grady Booch\nAn Architectural Deep Dive"

    # --- SLIDE 2: The Man Behind the Cloud ---
    content_2 = [
        "Grady Booch: A pioneer in software architecture and object-oriented design.",
        "One of the 'Three Amigos' (with Rumbaugh and Jacobson) who created UML.",
        "The Booch Method was his proprietary predecessor to UML.",
        "Known for its distinct 'Cloud' notation and iterative approach."
    ]
    add_bullet_slide(prs, "The Man Behind the Cloud: Grady Booch", content_2)

    # --- SLIDE 3: Core Methodology ---
    content_3 = [
        "Iterative & Incremental:",
        "   - Software is built in cycles (Macro & Micro processes).",
        "   - Rejects the 'big bang' waterfall release.",
        "Object-Oriented:",
        "   - System analyzed as interacting objects, not just functions.",
        "   - Focus on high cohesion and low coupling.",
        "Rich Notation:",
        "   - Uses specific symbols to describe static structure and dynamic behavior."
    ]
    add_bullet_slide(prs, "Core Principles of the Booch Method", content_3)

    # --- SLIDE 4: Class Diagrams (The Cloud) ---
    content_4 = [
        "The most iconic feature of the Booch method.",
        "Visual Representation:",
        "   - Classes are drawn as CLOUDS.",
        "   - Dashed clouds = Abstract Classes.",
        "   - Solid clouds = Concrete Classes.",
        "Distinction:",
        "   - Differentiates from the 'boxes' used in OMT (Rumbaugh).",
        "   - Captures the logical, static structure of the system."
    ]
    add_bullet_slide(prs, "Class Diagrams: The Cloud", content_4)

    # --- SLIDE 5: Object Diagrams ---
    content_5 = [
        "Purpose:",
        "   - To show a snapshot of the system at a specific moment in time.",
        "Components:",
        "   - Instances (Objects) instead of templates (Classes).",
        "   - Depicted often as rounded rectangles.",
        "   - Lines represent message paths/links.",
        "Usage:",
        "   - To validate complex scenarios and collaboration between objects."
    ]
    add_bullet_slide(prs, "Object Diagrams", content_5)

    # --- SLIDE 6: The Macro Process ---
    content_6 = [
        "The Development Cycle (Macro Process):",
        "1. Conceptualization: Establishing core requirements.",
        "2. Analysis: Modeling the desired behavior.",
        "3. Design: Creating the architectural blueprint.",
        "4. Evolution: Implementation and code refinement.",
        "5. Maintenance: Post-deployment support."
    ]
    add_bullet_slide(prs, "The Development Cycle", content_6)

    # --- SLIDE 7: Dynamic Modeling ---
    content_7 = [
        "State Transition Diagrams:",
        "   - Show the lifecycle of a single object.",
        "   - Circles = States, Arrows = Transitions.",
        "Interaction Diagrams:",
        "   - Show the flow of messages between multiple objects.",
        "   - Similar to modern UML Sequence Diagrams.",
        "   - Focus on 'how' a specific function is executed."
    ]
    add_bullet_slide(prs, "Dynamic Behavior Modeling", content_7)

    # --- SLIDE 8: Physical Architecture ---
    content_8 = [
        "Module Diagrams (Implementation View):",
        "   - Map logical classes to code files (headers, packages).",
        "   - Visualize compilation dependencies.",
        "Process Diagrams (Deployment View):",
        "   - Map software tasks to physical hardware/processors.",
        "   - Critical for distributed systems."
    ]
    add_bullet_slide(prs, "Physical View: Modules & Processes", content_8)

    # --- SLIDE 9: Strengths ---
    content_9 = [
        "Completeness: Covers Logical, Physical, Static, and Dynamic views.",
        "Precision: Detailed notation excellent for Ada and C++.",
        "Iterative: Formally rejected Waterfall in favor of incremental design.",
        "Architecture-Centric: Focus on structural integrity."
    ]
    add_bullet_slide(prs, "Strengths of the Method", content_9)

    # --- SLIDE 10: Limitations ---
    content_10 = [
        "Complexity: The 'Cloud' notation was difficult to draw by hand.",
        "Overwhelming: The sheer number of diagram types confused new users.",
        "Tool Dependent: Required specialized (and expensive) software to manage.",
        "Fragmentation: Information sometimes split across too many views."
    ]
    add_bullet_slide(prs, "Critique & Limitations", content_10)

    # --- SLIDE 11: Evolution to UML ---
    content_11 = [
        "The 'Methods War' of the 90s:",
        "   - Booch joined forces with Rumbaugh (OMT) and Jacobson (OOSE).",
        "The Result: UML (Unified Modeling Language).",
        "Outcome:",
        "   - The 'Cloud' was replaced by the standard 'Box'.",
        "   - Booch's architectural concepts remain the backbone of UML.",
        "   - The Booch Method is effectively the grandfather of modern software modeling."
    ]
    add_bullet_slide(prs, "The Road to UML", content_11)

    # --- SLIDE 12: Q&A ---
    slide_layout = prs.slide_layouts[1]
    slide = prs.slides.add_slide(slide_layout)
    title = slide.shapes.title
    title.text = "Questions?"
    
    tf = slide.placeholders[1].text_frame
    p = tf.add_paragraph()
    p.text = "Thank you for listening."
    p.alignment = PP_ALIGN.CENTER

    # Save the presentation
    file_name = "Booch_Method_Presentation.pptx"
    prs.save(file_name)
    print(f"Presentation saved successfully as '{file_name}'")

if __name__ == "__main__":
    create_presentation()