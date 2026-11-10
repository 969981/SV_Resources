/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d0160; name: FUN_007d0160
 */


undefined8 FUN_007d0160(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined1 auStack_48 [16];
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  FUN_007cd5a0(*(undefined8 *)PTR_DAT_047d0a08);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = param_1 + 0x94;
  FUN_00cbd7c0(auStack_48,lVar1);
  FUN_0078cb94(uVar5,auStack_48);
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_38[0] = 0;
  FUN_007935cc(local_38);
  lVar6 = local_38[0] - *(long *)(param_1 + 0xa8);
  plVar4 = (long *)FUN_0079365c();
  puVar2 = PTR_DAT_047d0868;
  uVar3 = 0;
  if (*plVar4 != 0) {
    uVar3 = (undefined4)(lVar6 / *plVar4);
  }
  *(undefined4 *)(PTR_DAT_047d0868 + 0x3b0) = uVar3;
  *(undefined4 *)(puVar2 + 0x3a8) = *(undefined4 *)(param_1 + 0x94);
  uVar3 = FUN_00794af4(lVar1);
  *(undefined4 *)(puVar2 + 0x3ac) = uVar3;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_0078cc00();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar7 = (int *)(param_1 + 0x60);
  if (*piVar7 == 1) {
    FUN_0078cc00(piVar7);
  }
  FUN_0078cac8(piVar7);
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_018ff39c(lVar1,local_38);
  return 1;
}


