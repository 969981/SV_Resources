/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345a5c4; name: FUN_0345a5c4
 */


void FUN_0345a5c4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_047e70b8 + 0x10);
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  *param_1 = (long)(PTR_DAT_047e70b0 + 0x10);
  if (param_1[5] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar4 = tpidr_el0;
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar5,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0345a6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0,8);
  return;
}


