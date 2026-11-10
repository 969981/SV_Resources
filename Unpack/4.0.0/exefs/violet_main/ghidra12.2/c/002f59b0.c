/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f59b0; name: FUN_002f59b0
 */


undefined8
FUN_002f59b0(void *param_1,size_t param_2,void *param_3,size_t param_4,undefined8 param_5,
            long param_6,undefined8 param_7,undefined8 *param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_80;
  long local_78;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = FUN_002f5af0(param_7);
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0038ee90(param_1,param_2,&local_80,&local_50);
  if (local_78 == 0) {
LAB_002f5a58:
    bVar1 = false;
    if (param_6 == 0) goto LAB_002f5a90;
LAB_002f5a60:
    if (param_2 != param_4) goto LAB_002f5a90;
    if (param_2 == 0) goto LAB_002f5ac4;
    iVar2 = memcmp(param_1,param_3,param_2);
    if ((bool)(bVar1 | iVar2 == 0)) goto LAB_002f5ac4;
  }
  else {
    lVar3 = FUN_00395e38(&local_80,0x25,0);
    if (lVar3 == -1) {
      iVar2 = FUN_002ff320(local_60,local_80,local_78);
    }
    else {
      local_78 = lVar3;
      iVar2 = FUN_002ff320(local_60,local_80,lVar3);
    }
    if (iVar2 == 0) goto LAB_002f5a58;
    bVar1 = true;
    if (param_6 != 0) goto LAB_002f5a60;
LAB_002f5a90:
    if (bVar1) goto LAB_002f5ac4;
  }
  FUN_003673f0(&local_80,"call host does not match SSL server name");
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                       ,0xc5,&local_80,0,0);
  *param_8 = uVar4;
LAB_002f5ac4:
  if ((void *)local_60._0_8_ != (void *)0x0) {
    free((void *)local_60._0_8_);
  }
  return 1;
}


