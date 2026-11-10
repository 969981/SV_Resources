/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d6964; name: FUN_007d6964
 */


undefined8 FUN_007d6964(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [64];
  
  puVar1 = PTR_DAT_047d0860;
  lVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  for (lVar6 = *(long *)(lVar3 + 0x20); lVar6 != lVar3 + 0x18; lVar6 = *(long *)(lVar6 + 8)) {
    if ((*(ushort *)(*(long *)(lVar6 + 0x10) + 0x38) == param_3) &&
       (*(long *)(*(long *)(lVar6 + 0x10) + 0x30) != param_2)) {
      return 0;
    }
  }
  uVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
  lVar3 = FUN_007e2bb4(uVar4,param_2);
  if (lVar3 == 0) goto LAB_007d6a70;
  FUN_007e5190(auStack_80);
  FUN_007e1c44(auStack_90,lVar3,auStack_80);
  uVar2 = FUN_007e5330(auStack_80);
  if (param_3 == (uVar2 & 0xffff)) {
    FUN_007e5304(auStack_b0,auStack_80);
    uVar5 = FUN_007967e8(auStack_b0,param_4);
    if ((uVar5 & 1) == 0) goto LAB_007d6a30;
  }
  else {
LAB_007d6a30:
    lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar1);
    if (lVar3 == *(long *)(lVar6 + 0x98)) {
      *(undefined1 *)(param_1 + 0x780) = 0;
      if (*(int *)(param_1 + 0x784) == 0) {
        *(undefined4 *)(param_1 + 0x784) = 3;
        FUN_007e51d0(auStack_80);
        goto LAB_007d6a70;
      }
    }
    else {
      FUN_007d5240(param_1,lVar3);
    }
    lVar3 = 0;
  }
  FUN_007e51d0(auStack_80);
  if (lVar3 != 0) {
    return 1;
  }
LAB_007d6a70:
  uVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
  FUN_00796868(auStack_80,param_4);
  lVar3 = FUN_007e3b50(uVar4,auStack_80);
  FUN_0284e3d4(auStack_80);
  if (lVar3 != 0) {
    FUN_007e5190(auStack_80);
    FUN_007e1c44(auStack_b0,lVar3,auStack_80);
    uVar2 = FUN_007e5330(auStack_80);
    if ((param_3 != (uVar2 & 0xffff)) || (lVar6 = FUN_007e5328(auStack_80), lVar6 != param_2)) {
      lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar1);
      if (lVar3 == *(long *)(lVar6 + 0x98)) {
        *(undefined1 *)(param_1 + 0x780) = 0;
        if (*(int *)(param_1 + 0x784) == 0) {
          *(undefined4 *)(param_1 + 0x784) = 3;
        }
      }
      else {
        FUN_007d5240(param_1,lVar3);
      }
    }
    FUN_007e51d0(auStack_80);
  }
  return 1;
}


