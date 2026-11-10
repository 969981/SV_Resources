/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f820; name: FUN_0011f820
 */


undefined8 FUN_0011f820(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 400) = 0;
  uVar2 = FUN_00120a50(param_1,0,0x7fffffff);
  if ((int)uVar2 == 0) {
    DAT_047ec990 = "CreateSemaphore failed.";
  }
  else {
    iVar1 = FUN_00120a50(param_1 + 0x80,1,0x7fffffff);
    if (iVar1 == 0) {
      DAT_047ec990 = "CreateSemaphore failed.";
    }
    else {
      iVar1 = FUN_001206d0(param_1 + 0x100,0);
      if (iVar1 != 0) {
        *(undefined8 *)(param_1 + 0x180) = 1;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined4 *)(param_1 + 400) = 1;
        return 1;
      }
      DAT_047ec990 = "CreateMutex failed.";
      FUN_00120aa0(param_1 + 0x80);
    }
    FUN_00120aa0(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


