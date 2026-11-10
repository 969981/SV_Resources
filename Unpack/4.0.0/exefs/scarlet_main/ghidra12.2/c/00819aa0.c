/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819aa0; name: FUN_00819aa0
 */


void FUN_00819aa0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 00819ab4 to 00819ac7 has its CatchHandler @ 00819afc */
  uVar1 = FUN_00819b20(param_2,
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/N3rtc21SecureRandomGeneratorE"
                       ,0x40,param_1);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 00819ad8 to 00819af7 has its CatchHandler @ 00819af8 */
                    /* WARNING: Subroutine does not return */
    FUN_008192a0("external/webrtc/rtc_base/helpers.cc",0x80,"CreateRandomString(len, &str)",
                 PTR_s__03d0df66_0x11_047d1910);
  }
  return;
}


