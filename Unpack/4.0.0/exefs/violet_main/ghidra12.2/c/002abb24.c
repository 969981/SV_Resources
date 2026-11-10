/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002abb24; name: FUN_002abb24
 */


undefined8
FUN_002abb24(undefined8 param_1,long *param_2,undefined1 *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_60 [32];
  
  lVar3 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar5 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar5 = param_2[1];
  }
                    /* try { // try from 002abb7c to 002abbaf has its CatchHandler @ 002abc8c */
  lVar4 = FUN_0038ad50(PTR_PTR_047cc770,lVar3);
  if ((lVar4 == 0) ||
     (uVar5 = FUN_00385610(lVar1,uVar5,lVar4,PTR_PTR_047cc770,lVar3), (uVar5 & 1) == 0)) {
                    /* try { // try from 002abbec to 002abc17 has its CatchHandler @ 002abc84 */
    FUN_003673f0(auStack_60,"Can\'t decode response.");
    uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                         ,0x822,auStack_60,0,0);
  }
  else {
    if (*(char *)(lVar4 + 1) == '\0') {
      puVar6 = *(ulong **)(lVar4 + 0x10);
      if ((puVar6 != (ulong *)0x0) && (uVar5 = puVar6[1], uVar5 != 0)) {
        uVar8 = *puVar6 & 0xfffffffffffffff8;
        do {
                    /* try { // try from 002abc60 to 002abc6b has its CatchHandler @ 002abc88 */
          FUN_002b3804(param_4,uVar8,uVar8 + 8);
          uVar5 = uVar5 - 1;
          uVar8 = uVar8 + 0x10;
        } while (uVar5 != 0);
      }
    }
    else {
      *param_3 = 1;
    }
                    /* try { // try from 002abbd4 to 002abbd7 has its CatchHandler @ 002abc7c */
    iVar2 = FUN_0038e100(**(undefined8 **)(lVar4 + 8),
                         (ulong)*(uint *)(*(undefined8 **)(lVar4 + 8) + 1) | 0x300000000);
    uVar7 = 0;
    *param_5 = (long)iVar2;
  }
  if (lVar3 != 0) {
                    /* try { // try from 002abc20 to 002abc27 has its CatchHandler @ 002abc80 */
    FUN_0038bd40(lVar3);
  }
  return uVar7;
}


