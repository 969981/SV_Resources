/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ebd00; name: FUN_002ebd00
 */


void FUN_002ebd00(long param_1,undefined8 param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == *(long *)(param_1 + 0x20)) {
    uVar1 = lVar6 + 8U;
    if (lVar6 + 8U <= (ulong)(lVar6 * 2)) {
      uVar1 = lVar6 * 2;
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    lVar2 = FUN_0038c7f0(*(undefined8 *)(param_1 + 0x10),uVar1 * 0x18);
    lVar6 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x18) = lVar6 + 1;
  uVar3 = FUN_0038ccb0(param_2);
  puVar5 = (undefined8 *)(lVar2 + lVar6 * 0x18);
  *puVar5 = uVar3;
  uVar3 = FUN_0038ccb0(param_3);
  puVar5[1] = uVar3;
  sVar4 = strlen(param_3);
  puVar5[2] = sVar4;
  return;
}


