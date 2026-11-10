/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e98844; name: FUN_01e98844
 */


bool FUN_01e98844(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    lVar1 = param_1 + 0x48;
    uVar3 = FUN_019ab5f0(lVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0x100000008;
      iVar4 = 1;
    }
    else {
      uVar3 = FUN_019ab588(lVar1);
      if ((uVar3 & 1) == 0) {
        FUN_019ab614(lVar1);
        uVar2 = FUN_01e988c0();
        iVar4 = 1;
        *(undefined4 *)(param_1 + 0x40) = uVar2;
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x44);
      }
    }
  }
  return iVar4 == 1;
}


