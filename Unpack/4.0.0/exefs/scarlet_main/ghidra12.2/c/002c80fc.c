/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c80fc; name: FUN_002c80fc
 */


/* WARNING: Removing unreachable block (ram,0x002c834c) */
/* WARNING: Removing unreachable block (ram,0x002c82f0) */
/* WARNING: Removing unreachable block (ram,0x002c82e0) */
/* WARNING: Removing unreachable block (ram,0x002c8334) */
/* WARNING: Removing unreachable block (ram,0x002c82b0) */
/* WARNING: Removing unreachable block (ram,0x002c859c) */
/* WARNING: Removing unreachable block (ram,0x002c81dc) */
/* WARNING: Removing unreachable block (ram,0x002c826c) */
/* WARNING: Removing unreachable block (ram,0x002c830c) */

void FUN_002c80fc(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  ulong uVar7;
  long *__dest;
  long lVar8;
  ulong uVar9;
  long *local_78;
  long *local_70;
  long *local_68;
  byte local_60;
  undefined4 local_5f;
  char cStack_5b;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  
  *param_1 = 0;
  param_1[0x12] = 0;
  if (*param_2 != 5) {
                    /* try { // try from 002c81e4 to 002c820f has its CatchHandler @ 002c8618 */
    FUN_003673f0(&local_60,"malformed JSON in bootstrap file");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x78,&local_60,0,0);
    *param_3 = uVar6;
    return;
  }
  local_60 = 0x16;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_54 = 0;
  local_5f = s_xds_servers_03bd2059._0_4_;
  cStack_5b = s_xds_servers_03bd2059[4];
  uStack_5a = s_xds_servers_03bd2059._5_2_;
  uStack_58 = CONCAT31(0x737265,s_xds_servers_03bd2059[7]);
                    /* try { // try from 002c8164 to 002c816f has its CatchHandler @ 002c85c8 */
  piVar3 = (int *)FUN_002ca988(param_2 + 8,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 + 10 == piVar3) {
                    /* try { // try from 002c8218 to 002c8273 has its CatchHandler @ 002c85bc */
    FUN_003673f0(&local_60,"\"xds_servers\" field not present");
    lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x7f,&local_60,0,0);
LAB_002c82d4:
    local_78 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
    local_68 = local_78 + 1;
    local_70 = local_78 + 1;
    *local_78 = lVar4;
  }
  else {
    if (piVar3[0xe] != 6) {
                    /* try { // try from 002c8274 to 002c829f has its CatchHandler @ 002c85b8 */
      FUN_003673f0(&local_60,"\"xds_servers\" field is not an array");
      lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x82,&local_60,0,0);
      goto LAB_002c82d4;
    }
                    /* try { // try from 002c81a4 to 002c81e3 has its CatchHandler @ 002c85b0 */
    lVar4 = FUN_002c86d4(param_1,piVar3 + 0xe);
    if (lVar4 != 0) goto LAB_002c82d4;
  }
  local_60 = 8;
  local_5f = 0x65646f6e;
  cStack_5b = 0;
                    /* try { // try from 002c8370 to 002c837b has its CatchHandler @ 002c85c4 */
  piVar3 = (int *)FUN_002ca988(param_2 + 8,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 + 10 == piVar3) goto LAB_002c84d0;
  if (piVar3[0xe] == 5) {
                    /* try { // try from 002c83ac to 002c83eb has its CatchHandler @ 002c85ac */
    lVar4 = FUN_002c8ac8(param_1,piVar3 + 0xe);
    if (lVar4 == 0) goto LAB_002c84d0;
    if (local_70 != local_68) goto LAB_002c8428;
    lVar8 = (long)local_70 - (long)local_78 >> 3;
    uVar9 = lVar8 + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
  }
  else {
                    /* try { // try from 002c83ec to 002c8417 has its CatchHandler @ 002c85b4 */
    FUN_003673f0(&local_60,"\"node\" field is not an object");
    lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x8b,&local_60,0,0);
    if (local_70 < local_68) {
LAB_002c8428:
      *local_70 = lVar4;
      local_70 = local_70 + 1;
      goto LAB_002c84d0;
    }
    lVar8 = (long)local_70 - (long)local_78 >> 3;
    uVar9 = lVar8 + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 002c85a4 to 002c85ab has its CatchHandler @ 002c85b4 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
  }
  uVar7 = (long)local_68 - (long)local_78 >> 2;
  if (uVar9 <= uVar7) {
    uVar9 = uVar7;
  }
  if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
    uVar9 = 0x1fffffffffffffff;
  }
  if (uVar9 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar9 << 3);
  }
  plVar1 = (long *)(lVar5 + lVar8 * 8);
  *plVar1 = lVar4;
  __n = (long)local_70 - (long)local_78;
  __dest = (long *)((long)plVar1 - __n);
  if (0 < (long)__n) {
    memcpy(__dest,local_78,__n);
  }
  bVar2 = local_78 != (long *)0x0;
  local_78 = __dest;
  local_70 = plVar1 + 1;
  if (bVar2) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
LAB_002c84d0:
  if (local_70 == local_78) {
    *param_3 = 0;
  }
  else {
                    /* try { // try from 002c8510 to 002c853f has its CatchHandler @ 002c85c0 */
    FUN_003673f0(&local_60,"errors parsing xds bootstrap file");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x92,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
    if (local_70 != local_78) {
      uVar9 = 0;
      do {
        if (4 < (ulong)local_78[uVar9]) {
                    /* try { // try from 002c858c to 002c858f has its CatchHandler @ 002c862c */
          FUN_00350fd0();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)((long)local_70 - (long)local_78 >> 3));
    }
    *param_3 = uVar6;
  }
  if (local_78 != (long *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


