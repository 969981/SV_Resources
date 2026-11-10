/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c3e44; name: FUN_006c3e44
 */


undefined4 FUN_006c3e44(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  local_28 = CONCAT44(1,*(undefined4 *)(param_1 + 0x10));
  iVar1 = nn::socket::Poll((pollfd *)&local_28,1,param_4);
  if (iVar1 < 1) {
    if (iVar1 != 0) {
      iVar1 = nn::socket::GetLastErrno();
      if (iVar1 == 9) {
        return 3;
      }
      if (iVar1 != 0xb) {
        if (iVar1 == 0x16) {
          return 3;
        }
        goto LAB_006c3ec4;
      }
    }
    uVar2 = 2;
  }
  else {
    if ((local_28 & 0x38000000000000) != 0) {
      return 3;
    }
    if ((local_28 & 0x1000000000000) != 0) {
      uVar2 = FUN_006c3ce4(param_1,param_2,param_3);
      return uVar2;
    }
LAB_006c3ec4:
    uVar2 = 1;
  }
  return uVar2;
}


