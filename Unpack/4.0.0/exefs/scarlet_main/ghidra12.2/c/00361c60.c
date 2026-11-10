/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00361c60; name: FUN_00361c60
 */


void FUN_00361c60(void)

{
  int *piVar1;
  undefined2 local_50 [4];
  undefined8 local_48;
  int local_40 [2];
  long local_38;
  char local_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  
  if ((DAT_047ef800 & 1) == 0) goto LAB_00361d64;
  DAT_047ef808 = DAT_047ef808 + 1;
  DAT_047ef804 = DAT_047ef804 + 1;
  FUN_0038db60(&DAT_047ef840);
  piVar1 = (int *)FUN_0038c780(0x28);
  local_50[0] = 0x101;
  local_48 = 0;
  FUN_0038f3ac(local_40,"grpc_global_timer",&LAB_00361d70,piVar1,0,local_50);
  if (local_40 == piVar1) {
    if (local_30 != '\0') goto LAB_00361d18;
  }
  else {
    *piVar1 = local_40[0];
    *(long *)(piVar1 + 2) = local_38;
    *(undefined8 *)(piVar1 + 6) = uStack_28;
    *(ulong *)(piVar1 + 4) = CONCAT62(uStack_2e,CONCAT11(uStack_2f,local_30));
    local_40[0] = 5;
    local_38 = 0;
    local_30 = '\x01';
    uStack_2f = 1;
    uStack_28 = 0;
LAB_00361d18:
    if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00361d68 to 00361d6b has its CatchHandler @ 00361d6c */
      abort();
    }
  }
  if (*(long **)(piVar1 + 2) == (long *)0x0) {
    if (*piVar1 != 4) goto LAB_00361d64;
  }
  else {
    if (*piVar1 != 1) {
LAB_00361d64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *piVar1 = 2;
    (**(code **)(**(long **)(piVar1 + 2) + 0x10))();
  }
  return;
}


