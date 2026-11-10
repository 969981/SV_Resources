/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d78d4; name: FUN_001d78d4
 */


undefined4 FUN_001d78d4(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = 0;
  if ((undefined **)param_1[0x84] == &PTR_s_HTTPS_04484888 ||
      (undefined **)param_1[0x84] == &PTR_DAT_04484910) {
    lVar3 = *(long *)(*param_1 + 0x1e8);
    if (*(long *)(lVar3 + 0x280) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = param_1[0xaa];
      *(undefined8 *)(lVar3 + 0x280) = 0;
      FUN_001f383c(lVar2,*(undefined4 *)(lVar3 + 0x218));
      FUN_001d7960(param_1,param_1 + 0xaa,&local_24);
      uVar1 = local_24;
    }
  }
  return uVar1;
}


