/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01692868; name: FUN_01692868
 */


void FUN_01692868(long param_1,int param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar6 = 8;
  if ((param_4 & 1) == 0) {
    lVar6 = 4;
  }
  uVar7 = *(long *)(param_1 + 0x48) - 1U &
          -(lVar6 + (ulong)(param_3 != (undefined4 *)0x0) * 4 +
           (ulong)(uint)((*(int *)(param_1 + 0x20) + (int)lVar1) - (int)lVar2));
  *(long *)(param_1 + 0x38) = lVar1;
  if ((ulong)(lVar2 - lVar1) < uVar7) {
    FUN_0157184c(param_1,uVar7);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
LAB_016929b4:
    *puVar4 = 0;
    if ((uVar7 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar7 != 2)) {
      uVar5 = 2;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar5) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
  }
  else {
    puVar4 = (undefined1 *)(lVar2 - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if (uVar7 != 0) goto LAB_016929b4;
  }
  if (param_3 != (undefined4 *)0x0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar6 - *(long *)(param_1 + 0x38)) < 4) {
      FUN_0157184c(param_1,4);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -4;
    *(undefined4 *)(lVar6 + -4) = *param_3;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar6) + *(int *)(param_1 + 0x28));
  uVar7 = (ulong)uVar3 & 3;
  if ((ulong)(lVar6 - *(long *)(param_1 + 0x38)) < uVar7) {
    FUN_0157184c(param_1,uVar7);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
  }
  else {
    puVar4 = (undefined1 *)(lVar6 - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if ((uVar3 & 3) == 0) goto LAB_0169292c;
  }
  *puVar4 = 0;
  if ((uVar7 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar7 != 2)) {
    uVar5 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
LAB_0169292c:
  FUN_015713f8(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                        *(int *)(param_1 + 0x28)) - param_2) + 4);
  if ((param_4 & 1) != 0) {
    FUN_015713f8(param_1,(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x47) = 1;
  return;
}


