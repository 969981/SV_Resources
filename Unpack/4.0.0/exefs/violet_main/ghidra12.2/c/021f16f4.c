/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f16f4; name: FUN_021f16f4
 */


void FUN_021f16f4(long param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x226) {
    sVar1 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    if (sVar1 == 2) {
      iVar2 = FUN_021f1618(param_1);
      FUN_021f1678(param_1,iVar2 + param_2);
      return;
    }
  }
  return;
}


