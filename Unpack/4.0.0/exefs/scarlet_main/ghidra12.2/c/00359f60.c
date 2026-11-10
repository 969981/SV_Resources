/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00359f60; name: FUN_00359f60
 */


undefined8 FUN_00359f60(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  long local_68;
  undefined8 *puStack_60;
  undefined1 auStack_48 [8];
  
  if (*(long *)(*(long *)(param_1 + 0x58) + 0x50) == 0) {
    *(long *)(param_1 + 0x40) = param_2;
    *(long *)(param_1 + 0x48) = param_3;
    *(undefined8 *)(param_1 + 0x50) = param_4;
    uVar3 = FUN_00359c10(*(long *)(param_1 + 0x58),param_3 * param_2,param_1);
    puVar2 = PTR_FUN_047cce58;
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar3 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x40);
          uVar4 = *(undefined8 *)(param_1 + 0x50);
          uVar1 = *(undefined8 *)(param_1 + 0x58);
          local_70 = (undefined8 *)FUN_0038c780(lVar5 + 0x40);
          local_70[5] = 1;
          *(undefined4 *)(local_70 + 1) = 3;
          *local_70 = local_70 + 5;
          puStack_60 = local_70 + 8;
          local_70[2] = local_70;
          local_70[3] = puVar2;
          local_70[4] = local_70;
          local_70[6] = uVar1;
          local_70[7] = lVar5;
          local_68 = lVar5;
          FUN_00368650(uVar4,&local_70);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulong *)(param_1 + 0x48));
      }
      return 1;
    }
  }
  else {
    FUN_003673f0(&local_70,"Resource user shutdown");
    uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3ed,
                         &local_70,0,0);
    FUN_0035351c(auStack_48,param_1,uVar4);
  }
  return 0;
}


