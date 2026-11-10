/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b240; name: FUN_0038b240
 */


undefined8 FUN_0038b240(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  size_t __n;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_50;
  long lStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  void *local_38;
  
  iVar3 = 1 << (ulong)(param_2 & 0x1f);
  uVar2 = param_2 & 0xff;
  lStack_48 = 0;
  if (uVar2 != 0) {
    lStack_48 = (long)iVar3 + -1;
  }
  local_40 = (undefined1)param_2;
  __n = 0;
  if (uVar2 != 0) {
    __n = ((long)iVar3 + (long)iVar3 * 2) * 8;
  }
  local_50 = 0;
  if (uVar2 == 0) {
    local_38 = (void *)0x0;
  }
  else {
    local_38 = (void *)(*(code *)*param_3)(param_3,0,0,__n);
    if (local_38 == (void *)0x0) {
      return 0;
    }
    memset(local_38,0,__n);
  }
  bVar5 = *(byte *)(param_1 + 2);
  uVar7 = (ulong)(1 << (ulong)(bVar5 & 0x1f));
  uVar9 = uVar7 - 1;
  lVar6 = 0;
  uVar10 = 0xffffffffffffffff;
  if (bVar5 == 0) {
    uVar9 = 0xffffffffffffffff;
  }
  do {
    if (uVar9 == uVar10) goto LAB_0038b388;
    uVar10 = uVar10 + 1;
    plVar1 = (long *)(param_1[3] + lVar6);
    lVar6 = lVar6 + 0x18;
  } while (*plVar1 == 0);
  uVar9 = 0;
  if (bVar5 != 0) {
    uVar9 = uVar7;
  }
  if (uVar10 < uVar9) {
    lVar8 = param_1[3];
    puVar4 = *(undefined4 **)(lVar8 + lVar6 + -0x18);
    while (puVar4 != (undefined4 *)0x0) {
      lVar6 = uVar10 * 0x18;
      FUN_0038b4e0(&local_50,puVar4 + 1,*puVar4,*(undefined8 *)(lVar8 + lVar6 + 8),param_3);
      bVar5 = *(byte *)(param_1 + 2);
      uVar9 = 0;
      if (bVar5 != 0) {
        uVar9 = (long)(1 << (ulong)(bVar5 & 0x1f));
      }
      do {
        uVar10 = uVar10 + 1;
        if (uVar9 <= uVar10) goto LAB_0038b388;
        lVar8 = param_1[3] + lVar6;
        lVar6 = lVar6 + 0x18;
      } while (*(long *)(lVar8 + 0x18) == 0);
      if (uVar9 <= uVar10) break;
      lVar8 = param_1[3];
      puVar4 = *(undefined4 **)(lVar8 + lVar6);
    }
  }
LAB_0038b388:
  if (bVar5 != 0) {
    lVar6 = 0;
    uVar10 = 0;
    do {
      (*(code *)*param_3)(param_3,*(undefined8 *)(param_1[3] + lVar6),0,0);
      uVar10 = uVar10 + 1;
      lVar6 = lVar6 + 0x18;
      uVar9 = 0;
      if (*(byte *)(param_1 + 2) != 0) {
        uVar9 = (long)(1 << (ulong)(*(byte *)(param_1 + 2) & 0x1f));
      }
    } while (uVar10 < uVar9);
  }
  (*(code *)*param_3)(param_3,param_1[3],0,0);
  param_1[1] = lStack_48;
  *param_1 = local_50;
  param_1[3] = local_38;
  param_1[2] = CONCAT71(uStack_3f,local_40);
  return 1;
}


