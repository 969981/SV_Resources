/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081d40c; name: FUN_0081d40c
 */


void FUN_0081d40c(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_047d1970 + 0x10);
  lVar1 = FUN_0042bbc0();
  param_1[1] = lVar1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_008192a0("external/webrtc/rtc_base/openssldigest.cc",0x14,"ctx_ != nullptr",
                 PTR_s__03d0df66_0x11_047d1910);
  }
  FUN_0042bb10();
  uVar2 = FUN_0081d49c(param_2,param_1 + 2);
  if ((uVar2 & 1) == 0) {
    param_1[2] = 0;
    return;
  }
  FUN_0042bc40(param_1[1],param_1[2],0);
  return;
}


