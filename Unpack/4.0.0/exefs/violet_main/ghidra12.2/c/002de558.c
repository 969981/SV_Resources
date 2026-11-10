/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002de558; name: FUN_002de558
 */


undefined8 FUN_002de558(uint *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  FUN_002de674(param_1,0xffffffff,0);
  if ((*param_2 != 0x14) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_002de638;
  FUN_002e67f4(*(long *)(param_2 + 0x20),param_1[0xb]);
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(int *)(lVar3 + 8) == 2) {
    iVar5 = *(int *)(*(long *)(lVar3 + 0x10) + 0x1c);
    if (0x19 < iVar5 - 0x41U) goto LAB_002de638;
    iVar5 = iVar5 + 0x20;
    uVar4 = FUN_002e67ac(lVar3,iVar5);
    if ((uVar4 & 1) == 0) goto LAB_002de638;
    FUN_002e4804(param_2);
    uVar1 = *param_1;
    param_2 = (byte *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (param_2 != (byte *)0x0) {
      uVar1 = uVar1 | 1;
      goto LAB_002de628;
    }
  }
  else {
    if (*(int *)(lVar3 + 8) != 1) goto LAB_002de638;
    iVar5 = *(int *)(*(long *)(lVar3 + 0x10) + 0x1c);
    FUN_002e4804(param_2);
    param_2 = (byte *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (param_2 != (byte *)0x0) {
      uVar1 = *param_1;
LAB_002de628:
      FUN_002e4418(param_2,3,uVar1);
    }
  }
  *(int *)(param_2 + 0x18) = iVar5;
LAB_002de638:
  if (*param_2 < 0x16) {
    bVar2 = FUN_002e7540(param_2);
    param_2[1] = bVar2 & 1;
  }
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(byte **)(param_1 + 8) = param_2;
  return 1;
}


