/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c026c; name: FUN_007c026c
 */


void FUN_007c026c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1 + 0xd8;
  lVar3 = (long)*(int *)(param_1 + 0xec);
  if (*(long *)(param_1 + 0xe0) == lVar5) {
    uVar4 = 0;
LAB_007c02a8:
    if ((*(int *)(param_1 + 0xe8) == 0) ||
       (lVar1 = *(long *)(uVar4 + 0x18) + 0x20,
       lVar1 + uVar4 + (ulong)*(ushort *)(uVar4 + 0x12) != param_2)) goto LAB_007c03dc;
    *(ulong *)(uVar4 + 0x18) =
         lVar1 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
  }
  else {
    uVar6 = *(long *)(param_1 + 0xe0) - lVar3;
    if (param_2 < uVar6) {
      uVar4 = 0;
    }
    else {
      do {
        uVar4 = uVar6;
        uVar6 = *(long *)(uVar4 + lVar3 + 8) - lVar3;
        if (uVar6 == lVar5 - lVar3) goto LAB_007c02a8;
      } while (uVar6 <= param_2);
    }
    if ((uVar4 == 0) ||
       (lVar5 = *(long *)(uVar4 + 0x18) + 0x20,
       lVar5 + uVar4 + (ulong)*(ushort *)(uVar4 + 0x12) != param_2)) {
      bVar2 = false;
      uVar4 = param_2;
    }
    else {
      *(ulong *)(uVar4 + 0x18) =
           lVar5 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
      bVar2 = true;
    }
    lVar5 = *(long *)(uVar4 + 0x18);
    if (uVar4 + *(ushort *)(uVar4 + 0x12) + lVar5 + 0x20 == uVar6) {
      if (!bVar2) {
        FUN_007bfd40(uVar6 + lVar3,lVar3 + uVar4);
        lVar3 = (long)*(int *)(param_1 + 0xec);
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        lVar5 = *(long *)(uVar4 + 0x18);
      }
      *(ulong *)(uVar4 + 0x18) =
           lVar5 + (ulong)*(ushort *)(uVar6 + 0x12) + *(long *)(uVar6 + 0x18) + 0x20;
      FUN_007bfd58(uVar6 + lVar3);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
      return;
    }
    if (!bVar2) {
      lVar5 = uVar6 + lVar3;
      param_2 = uVar4;
LAB_007c03dc:
      FUN_007bfd40(lVar5,lVar3 + param_2);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      return;
    }
  }
  return;
}


