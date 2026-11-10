/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010821f8; name: FUN_010821f8
 */


bool FUN_010821f8(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  uVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    plVar3[10] = plVar3[8];
    FUN_01082244(plVar3[8],(int)plVar3[9]);
  }
  return bVar1;
}


