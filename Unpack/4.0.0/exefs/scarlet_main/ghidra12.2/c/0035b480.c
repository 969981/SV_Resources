/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035b480; name: FUN_0035b480
 */


undefined8 FUN_0035b480(int param_1,undefined8 param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  byte local_28 [16];
  ulong local_18;
  
  if (param_1 < 0) {
    FUN_0035a410(local_28,param_2,0);
                    /* try { // try from 0035b4b0 to 0035b4cf has its CatchHandler @ 0035b538 */
    piVar2 = __errno_location();
    lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0x1bb,*piVar2,"socket");
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0035b534 to 0035b537 has its CatchHandler @ 0035b538 */
      abort();
    }
    uVar1 = (ulong)local_28 | 1;
    if ((local_28[0] & 1) != 0) {
      uVar1 = local_18;
    }
                    /* try { // try from 0035b4f0 to 0035b507 has its CatchHandler @ 0035b53c */
    FUN_00367770(auStack_48,uVar1);
    uVar4 = FUN_00351fa0(lVar3,4,auStack_48);
    if ((local_28[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_18);
      return uVar4;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


