/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f07e0; name: FUN_021f07e0
 */


void FUN_021f07e0(long param_1,undefined8 *param_2)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  uint *puVar4;
  ulong uVar5;
  
  puVar4 = (uint *)FUN_00f739f4(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a));
  if ((puVar4 != (uint *)0x0) && (uVar5 = (ulong)*puVar4, *puVar4 != 0)) {
    do {
      puVar4 = puVar4 + 1;
      sVar1 = (short)*puVar4;
      sVar3 = FUN_01df4e18(*param_2,0);
      if (sVar1 == sVar3) {
LAB_021f0830:
        bVar2 = true;
      }
      else {
        bVar2 = true;
        sVar3 = FUN_01df4e18(*param_2,1);
        if (sVar1 != sVar3) {
          sVar3 = FUN_01df4e18(*param_2,2);
          if (sVar1 == sVar3) goto LAB_021f0830;
          sVar3 = FUN_01df4e18(*param_2,3);
          bVar2 = sVar1 == sVar3;
        }
      }
      sVar3 = FUN_01df4e18(param_2[1],0);
      if (((((sVar1 == sVar3) || (sVar3 = FUN_01df4e18(param_2[1],1), sVar1 == sVar3)) ||
           (sVar3 = FUN_01df4e18(param_2[1],2), sVar1 == sVar3)) ||
          (sVar3 = FUN_01df4e18(param_2[1],3), sVar1 == sVar3)) && (bVar2)) {
        FUN_021f0cc0(param_1,sVar1);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


