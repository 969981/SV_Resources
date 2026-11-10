/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02967b90; name: FUN_02967b90
 */


undefined8 FUN_02967b90(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar5 == 0) || (iVar2 = *(int *)(lVar5 + 0xc), iVar2 < 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar9 = uVar6 & 0xff;
      *(undefined1 *)(param_3 + uVar9) = 0;
      if (((char)uVar6 < '\0') ||
         (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + uVar9 * 8 + 0x38),
         lVar5 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined1 *)(lVar5 + 0xc);
      }
      plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar7);
      sVar3 = (**(code **)(*plVar4 + 0x2a8))();
      if ((sVar3 != 0) && (uVar6 = FUN_02942dc0(param_1,param_2,uVar7), (uVar6 & 1) == 0)) {
        uVar8 = 1;
        *(undefined1 *)(param_3 + uVar9) = 1;
      }
      uVar1 = (int)uVar9 + 1;
      uVar6 = (ulong)uVar1;
    } while ((int)(uVar1 & 0xff) < iVar2);
  }
  return uVar8;
}


