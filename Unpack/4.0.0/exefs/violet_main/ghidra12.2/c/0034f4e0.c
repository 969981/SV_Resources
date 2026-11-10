/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034f4e0; name: FUN_0034f4e0
 */


void FUN_0034f4e0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [32];
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x1370) == 0) {
      FUN_003673f0(auStack_50,"Failed HTTP/1 client request");
      uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0x74,
                           auStack_50,0,0);
      *(undefined8 *)(param_1 + 0x1370) = uVar1;
    }
    FUN_0035a7b0(&local_68,
                 *(long *)(*(long *)(param_1 + 0x1050) + 8) + *(long *)(param_1 + 0x1058) * 0x84 +
                 -0x84);
    uVar4 = *(undefined8 *)(param_1 + 0x1370);
    uStack_78 = puStack_60;
    local_80 = local_68;
    local_70 = local_58;
    local_68 = 0;
    puStack_60 = (undefined1 *)0x0;
    local_58 = 0;
                    /* try { // try from 0034f56c to 0034f593 has its CatchHandler @ 0034f6b0 */
    FUN_003679b0(auStack_50,&local_80);
    uVar1 = FUN_00351fa0(param_2,4,auStack_50);
    uVar1 = FUN_00352130(uVar4,uVar1);
    *(undefined8 *)(param_1 + 0x1370) = uVar1;
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    if ((local_68 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
  }
  lVar2 = *(long *)(param_1 + 0x1058);
  if (lVar2 == **(long **)(param_1 + 0x1050)) {
    FUN_003673f0(auStack_50,"Failed HTTP requests to all targets");
    uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0xcd,
                         auStack_50,param_1 + 0x1370,1);
    FUN_0034f400(param_1,uVar1);
  }
  else {
    lVar3 = (*(long **)(param_1 + 0x1050))[1];
    *(long *)(param_1 + 0x1058) = lVar2 + 1;
    uVar4 = *(undefined8 *)(param_1 + 0x1378);
    *(long *)(param_1 + 0x1360) = param_1;
    *(undefined8 *)(param_1 + 0x1368) = 0;
    *(undefined1 **)(param_1 + 0x1358) = &LAB_0034f700;
    uVar1 = FUN_00359140();
    FUN_00344250(auStack_50,"grpc.resource_quota",uVar4,uVar1);
    local_68 = 1;
    puStack_60 = auStack_50;
    FUN_0035b630(param_1 + 0x1350,param_1 + 0x1060,**(undefined8 **)(param_1 + 0x1098),&local_68,
                 lVar3 + lVar2 * 0x84,*(undefined8 *)(param_1 + 0x1078));
  }
  return;
}


