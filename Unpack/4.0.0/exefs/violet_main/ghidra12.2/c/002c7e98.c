/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c7e98; name: FUN_002c7e98
 */


void FUN_002c7e98(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  char *__s;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  char *local_168;
  size_t local_160;
  byte local_138 [16];
  ulong local_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [80];
  undefined8 *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  char *local_90;
  undefined8 uStack_88;
  
  __s = (char *)FUN_0038c920("GRPC_XDS_BOOTSTRAP");
  if (__s == (char *)0x0) {
                    /* try { // try from 002c7ee4 to 002c7f0f has its CatchHandler @ 002c80f0 */
    FUN_003673f0(&local_90,"Environment variable GRPC_XDS_BOOTSTRAP not defined");
    uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x50,&local_90,0,0);
    *param_4 = uVar3;
    *param_1 = 0;
  }
  else {
                    /* try { // try from 002c7ec8 to 002c7ed3 has its CatchHandler @ 002c80dc */
    uVar3 = FUN_00357e00(__s,1,&local_b0);
    *param_4 = uVar3;
    if (uVar3 == 0) {
      lVar5 = (long)&local_a8 + 1;
      if (local_b0 != (undefined8 *)0x0) {
        lVar5 = lStack_a0;
      }
      uVar3 = local_a8 & 0xff;
      if (local_b0 != (undefined8 *)0x0) {
        uVar3 = local_a8;
      }
                    /* try { // try from 002c7f3c to 002c7f47 has its CatchHandler @ 002c80ac */
      FUN_00362c44(auStack_100,lVar5,uVar3,param_4);
      if ((local_b0 != (undefined8 *)0x0) && (plVar4 = (long *)*local_b0, plVar4 != (long *)0x0)) {
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
                    /* try { // try from 002c7f70 to 002c7f73 has its CatchHandler @ 002c8088 */
          (*(code *)local_b0[3])(local_b0[4]);
        }
      }
      if (*param_4 == 0) {
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x98);
        if (lVar5 != 0) {
                    /* try { // try from 002c8038 to 002c8043 has its CatchHandler @ 002c809c */
          FUN_0028f3c0(&local_90,auStack_100);
                    /* try { // try from 002c8044 to 002c8053 has its CatchHandler @ 002c808c */
          FUN_002c80fc(lVar5,&local_90,param_4);
          FUN_00288048(&local_90);
        }
      }
      else {
        local_90 = "Failed to parse bootstrap file ";
        uStack_88 = 0x1f;
        local_168 = __s;
        local_160 = strlen(__s);
                    /* try { // try from 002c7f9c to 002c7faf has its CatchHandler @ 002c80a4 */
        FUN_003959c0(local_138,&local_90,&local_168);
        uVar3 = (ulong)local_138 | 1;
        if ((local_138[0] & 1) != 0) {
          uVar3 = local_128;
        }
                    /* try { // try from 002c7fc4 to 002c7fe7 has its CatchHandler @ 002c80b0 */
        FUN_00367770(auStack_120,uVar3);
        uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                             ,0x66,auStack_120,param_4,1);
        if ((local_138[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_128);
        }
        if (4 < *param_4) {
                    /* try { // try from 002c8010 to 002c8013 has its CatchHandler @ 002c80a0 */
          FUN_00350fd0();
        }
        lVar5 = 0;
        *param_4 = uVar3;
      }
      *param_1 = lVar5;
      FUN_00288048(auStack_100);
    }
    else {
      *param_1 = 0;
    }
                    /* try { // try from 002c8068 to 002c806f has its CatchHandler @ 002c80d8 */
    free(__s);
  }
  return;
}


