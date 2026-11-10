/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ded28; name: FUN_031ded28
 */


void FUN_031ded28(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)*param_1;
  if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0)) {
    puVar3 = param_2;
    while (uVar4 = *puVar3, ((uint)uVar4 >> 6 & 1) == 0) {
      if (((uVar4 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_031ded94;
    }
    if ((puVar3 != (ulong *)0x0) && (puVar3[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x3f) + 2] != 0)) {
      if (puVar3[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x3f) + 2] != *puVar1) {
        *puVar1 = (ulong)PTR_LAB_047e5c00;
      }
      goto LAB_031ded98;
    }
LAB_031ded94:
    *puVar1 = 0;
  }
LAB_031ded98:
  puVar1 = (ulong *)param_1[1];
  if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0)) {
    puVar3 = param_2;
    while (uVar4 = *puVar3, ((uint)uVar4 >> 7 & 1) == 0) {
      if (((uVar4 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_031dee04;
    }
    if ((puVar3 != (ulong *)0x0) && (puVar3[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x7f) + 2] != 0)) {
      if (puVar3[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x7f) + 2] != *puVar1) {
        *puVar1 = (ulong)PTR_LAB_047e5c08;
      }
      goto LAB_031dee08;
    }
LAB_031dee04:
    *puVar1 = 0;
  }
LAB_031dee08:
  puVar1 = (ulong *)param_1[2];
  if ((puVar1 == (ulong *)0x0) || (*puVar1 == 0)) {
    return;
  }
  while( true ) {
    uVar2 = (uint)*param_2;
    if ((uVar2 >> 9 & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_031dee70;
  }
  if ((param_2 != (ulong *)0x0) &&
     (uVar2 = uVar2 & 0x1ff,
     param_2[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2] != 0)) {
    if (param_2[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2] == *puVar1)
    {
      return;
    }
    *puVar1 = (ulong)PTR_LAB_047e5c10;
    return;
  }
LAB_031dee70:
  *puVar1 = 0;
  return;
}


