/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015ed40; name: FUN_0015ed40
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0015ed40(undefined8 param_1)

{
  int iVar1;
  
  FUN_0015c3d0();
  if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
    (**(code **)PTR_PTR_047cb868)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0x12,
               "OODLE ERROR : Oodle_Core_Malloc_Failed ; %ld bytes\n",param_1);
  }
  FUN_0015c3f0();
  iVar1 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0x15,
                       "Oodle_Core_Malloc_Failed","false");
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


