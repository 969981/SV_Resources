/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ac34; name: FUN_01f6ac34
 */


undefined8 FUN_01f6ac34(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long local_68 [4];
  undefined4 local_48;
  undefined2 local_44;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  if ((*(long *)(param_1 + 0x60) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar5 == 0)) {
    return 0;
  }
  local_44 = 0;
  local_48 = 0;
  plVar7 = (long *)(lVar5 + -0x28);
  FUN_017522c8(local_68,&local_48,6);
  local_24 = 1;
  if ((local_68[0] != 0) && (FUN_01f6b934(auStack_28,&local_24,local_68[0] + 8), local_68[0] != 0))
  {
    uVar6 = 0xffffff80;
    if (0xff < (param_2 & 0xffff)) {
      uVar6 = 0xffffff81;
    }
    uVar1 = param_2;
    if (0x7f < (param_2 & 0xffff)) {
      uVar1 = uVar6;
    }
    lVar5 = FUN_0111b030(uVar1);
    if ((ulong)(*(long *)(local_68[0] + 0x18) + lVar5) <= *(ulong *)(local_68[0] + 0x10)) {
      *(char *)(*(long *)(local_68[0] + 8) + *(long *)(local_68[0] + 0x18)) = (char)uVar1;
      lVar5 = *(long *)(local_68[0] + 0x18) + 1;
      *(long *)(local_68[0] + 0x18) = lVar5;
      if ((uVar1 & 0xff) == 0x81) {
        *(short *)(*(long *)(local_68[0] + 8) + lVar5) = (short)param_2;
        lVar5 = *(long *)(local_68[0] + 0x18) + 2;
      }
      else {
        if ((uVar1 & 0xff) != 0x80) goto LAB_01f6ad00;
        *(char *)(*(long *)(local_68[0] + 8) + lVar5) = (char)param_2;
        lVar5 = *(long *)(local_68[0] + 0x18) + 1;
      }
      *(long *)(local_68[0] + 0x18) = lVar5;
    }
  }
LAB_01f6ad00:
  uVar2 = FUN_0111b1ec(plVar7,*(undefined8 *)(param_1 + 0x80));
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_014c27b0(local_68);
    uVar4 = FUN_014c27c8(local_68);
    uVar2 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar3,uVar4,param_1 + 0x80);
    if ((uVar2 & 1) != 0) {
      *(short *)(param_1 + 0x8e) = (short)param_2;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      goto LAB_01f6ad58;
    }
  }
  uVar3 = 0;
LAB_01f6ad58:
  FUN_01694aa8(local_68);
  return uVar3;
}


