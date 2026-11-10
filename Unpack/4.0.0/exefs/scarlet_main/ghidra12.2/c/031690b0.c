/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031690b0; name: FUN_031690b0
 */


void FUN_031690b0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  uVar2 = *(int *)((long)param_1 + 0xc) * 2;
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x101) {
    uVar6 = 0x100;
  }
  if (0x7ffffffd < uVar6) {
    uVar6 = 0x7ffffffe;
  }
  local_38 = uVar6 * 0x20;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_38,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 5);
  uVar1 = (uVar6 >> 1) << 6 | 0x20;
  if (uVar1 <= local_38) {
    local_38 = local_38 - 0x20;
    uVar7 = uVar6 | 1;
    lVar3 = uVar6 * -0x20;
    uVar6 = uVar7;
    if (uVar1 <= local_38) {
      uVar6 = uVar7 + (local_38 + lVar3 >> 5);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = __dest;
  return;
}


