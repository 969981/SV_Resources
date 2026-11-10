/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035b800; name: FUN_0035b800
 */


void FUN_0035b800(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_108 [16];
  undefined8 local_f8;
  byte local_f0 [8];
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong uStack_d0;
  char *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  byte local_78 [16];
  ulong local_68;
  
  do {
    iVar2 = nnsocketConnect(param_3,param_5,*(undefined4 *)(param_5 + 0x80));
    if (-1 < iVar2) break;
    piVar3 = __errno_location();
  } while (*piVar3 == 4);
  local_a8 = "tcp-client:";
  uStack_a0 = 0xb;
  FUN_0035a7b0(local_f0,param_5);
  uStack_d0 = (ulong)(local_f0[0] >> 1);
  local_d8 = (ulong)local_f0 | 1;
  if ((local_f0[0] & 1) != 0) {
    uStack_d0 = local_e8;
    local_d8 = local_e0;
  }
                    /* try { // try from 0035b8a0 to 0035b8af has its CatchHandler @ 0035bb88 */
  FUN_003959c0(local_78,&local_a8,&local_d8);
  if ((local_f0[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_e0);
  }
  uVar1 = (ulong)local_78 | 1;
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_68;
  }
                    /* try { // try from 0035b8e0 to 0035b8eb has its CatchHandler @ 0035bba0 */
  uVar4 = FUN_00354fa0(param_3,uVar1,1);
  if (iVar2 < 0) {
                    /* try { // try from 0035b954 to 0035b97f has its CatchHandler @ 0035bba0 */
    piVar3 = __errno_location();
    if ((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 0x73)) {
      FUN_00355180(param_1,uVar4);
      puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xd8);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[0x1a] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x19] = 0;
        puVar5[0x18] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        puVar5[0x15] = 0;
        puVar5[0x14] = 0;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
      }
      puVar5[0x18] = param_7;
      puVar5[0x19] = param_2;
      puVar5[4] = uVar4;
      puVar5[0x14] = param_1;
                    /* try { // try from 0035b9c8 to 0035b9d3 has its CatchHandler @ 0035bb5c */
      FUN_0035a7b0(&local_a8,param_5);
      if ((*(byte *)(puVar5 + 0x15) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar5[0x17]);
      }
      puVar5[0x17] = local_98;
      puVar5[0x16] = uStack_a0;
      puVar5[0x15] = local_a8;
                    /* try { // try from 0035ba00 to 0035ba67 has its CatchHandler @ 0035bb9c */
      FUN_0038db00(puVar5);
      *(undefined4 *)(puVar5 + 0xf) = 2;
      puVar5[0x11] = &LAB_0035bbd0;
      puVar5[0x12] = puVar5;
      puVar5[0x13] = 0;
      uVar4 = FUN_003438f0(param_4);
      puVar5[0x1a] = uVar4;
      FUN_0038db40(puVar5);
      puVar5[0xe] = 0;
      puVar5[0xc] = &LAB_0035c050;
      puVar5[0xd] = puVar5;
      FUN_00360550(puVar5 + 5,param_6,puVar5 + 0xb);
      FUN_00355060(puVar5[4],puVar5 + 0x10);
      FUN_0038db60(puVar5);
    }
    else {
                    /* try { // try from 0035ba6c to 0035ba8b has its CatchHandler @ 0035bb58 */
      piVar3 = __errno_location();
      lVar6 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc",
                           299,*piVar3,"connect");
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0035bb38 to 0035bb3b has its CatchHandler @ 0035bb58 */
        abort();
      }
                    /* try { // try from 0035ba94 to 0035ba9f has its CatchHandler @ 0035bb40 */
      FUN_0035a7b0(local_108,param_5);
                    /* try { // try from 0035baa0 to 0035babb has its CatchHandler @ 0035bb44 */
      FUN_003679b0(&local_a8,local_108);
      uVar7 = FUN_00351fa0(lVar6,4,&local_a8);
      if ((local_108[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f8);
      }
                    /* try { // try from 0035bad8 to 0035baef has its CatchHandler @ 0035bb58 */
      FUN_00355020(uVar4,0,0,"tcp_client_connect_error");
                    /* try { // try from 0035baf0 to 0035baff has its CatchHandler @ 0035bb3c */
      FUN_0035351c(&local_a8,param_2,uVar7);
    }
  }
  else {
                    /* try { // try from 0035b8f4 to 0035b903 has its CatchHandler @ 0035bb84 */
    FUN_0035a7b0(&local_a8,param_5);
    uVar1 = (ulong)&local_a8 | 1;
    if (((ulong)local_a8 & 1) != 0) {
      uVar1 = local_98;
    }
                    /* try { // try from 0035b918 to 0035b923 has its CatchHandler @ 0035bb64 */
    uVar4 = FUN_0035c1e0(uVar4,param_4,uVar1);
    *param_7 = uVar4;
    if (((ulong)local_a8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_98);
    }
                    /* try { // try from 0035b940 to 0035b94f has its CatchHandler @ 0035bb60 */
    FUN_0035351c(&local_a8,param_2,0);
  }
  if ((local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return;
}


