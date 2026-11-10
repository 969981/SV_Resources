/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002571b0; name: FUN_002571b0
 */


void FUN_002571b0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar1 = PTR_DAT_047cbe80;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047cbb08;
                    /* try { // try from 0025722c to 00257233 has its CatchHandler @ 002572a0 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))(*(long **)PTR_DAT_047cbb08,param_1 + 4);
  param_1[8] = (long)(param_1 + 8);
  param_1[9] = (long)(param_1 + 8);
  param_1[10] = 0;
  plVar4 = *(long **)puVar1;
                    /* try { // try from 0025724c to 00257273 has its CatchHandler @ 002572a8 */
  uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
  lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar2,param_2,0);
  param_1[2] = lVar3;
  param_1[3] = 1;
  return;
}


