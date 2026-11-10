/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305be0; name: FUN_00305be0
 */


undefined8 FUN_00305be0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *__ptr;
  void *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_00343a90(param_1,"grpc.default_authority");
  if (lVar1 == 0) {
                    /* try { // try from 00305c0c to 00305c1b has its CatchHandler @ 00305c9c */
    FUN_00343a90(param_1,"grpc.server_uri");
                    /* try { // try from 00305c1c to 00305c1f has its CatchHandler @ 00305c98 */
    lVar1 = FUN_00344040();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00305c84 to 00305c8b has its CatchHandler @ 00305c98 */
      abort();
    }
                    /* try { // try from 00305c24 to 00305c2b has its CatchHandler @ 00305c94 */
    FUN_00330de0(&local_60);
    __ptr = local_60;
    if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00305c34 to 00305c47 has its CatchHandler @ 00305c8c */
    FUN_00344220(&local_60,"grpc.default_authority",local_60);
    uVar2 = 1;
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
  }
  else {
    __ptr = (void *)0x0;
    uVar2 = 0;
  }
                    /* try { // try from 00305c54 to 00305c5f has its CatchHandler @ 00305ca8 */
  uVar2 = FUN_00343590(param_1,&local_40,uVar2);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00305c68 to 00305c6f has its CatchHandler @ 00305ca4 */
    free(__ptr);
  }
  return uVar2;
}


