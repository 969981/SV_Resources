/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cd3a0; name: FUN_003cd3a0
 */


undefined8 FUN_003cd3a0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long local_40;
  int local_34;
  
  pbVar6 = *(byte **)(*(long *)(param_1 + 0x22) + 8);
  do {
    uVar4 = *(ulong *)(param_1 + 0x26);
    while (uVar4 < 4) {
      iVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                        (param_1,0x16,&local_34,pbVar6 + uVar4,4 - uVar4,0,&local_40);
      if (iVar1 < 1) {
        param_1[10] = 3;
        return 0;
      }
      if (local_34 != 0x16) {
        if (local_34 == 0x14) {
          if (((*(long *)(param_1 + 0x26) == 0) && (local_40 == 1)) && (*pbVar6 == 1)) {
            lVar2 = *(long *)(param_1 + 0x2a);
            if ((param_1[0x17] == 0) && ((*(byte *)(lVar2 + 1) >> 3 & 1) != 0)) {
              return 0;
            }
            *param_2 = 0x101;
            *(undefined4 *)(lVar2 + 0x230) = 0x101;
            *(undefined8 *)(param_1 + 0x26) = 0;
            *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 8);
            *(undefined8 *)(lVar2 + 0x228) = 1;
            return 1;
          }
          uVar5 = 0x67;
          uVar3 = 0x4bc;
        }
        else {
          uVar5 = 0x85;
          uVar3 = 0x4d2;
        }
        FUN_003c3950(param_1,10,0x183,uVar5,"external/openssl/ssl/statem/statem_lib.c",uVar3);
        return 0;
      }
      uVar4 = *(long *)(param_1 + 0x26) + local_40;
      *(ulong *)(param_1 + 0x26) = uVar4;
      local_34 = 0x16;
    }
    if (((param_1[0xe] != 0) || (param_1[0x17] == 1)) ||
       ((*pbVar6 != 0 || (((pbVar6[1] != 0 || (pbVar6[2] != 0)) || (pbVar6[3] != 0)))))) {
      *param_2 = (uint)*pbVar6;
      *(uint *)(*(long *)(param_1 + 0x2a) + 0x230) = (uint)*pbVar6;
      iVar1 = FUN_003a6970(param_1 + 0x252);
      if (iVar1 == 0) {
        *(ulong *)(*(long *)(param_1 + 0x2a) + 0x228) =
             (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8 | (ulong)pbVar6[3];
        uVar5 = 0;
        *(long *)(param_1 + 0x24) = *(long *)(*(long *)(param_1 + 0x22) + 8) + 4;
      }
      else {
        lVar2 = FUN_003a6980(param_1 + 0x252);
        *(long *)(*(long *)(param_1 + 0x2a) + 0x228) = lVar2 + 4;
        *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 8);
        uVar5 = 4;
      }
      *(undefined8 *)(param_1 + 0x26) = uVar5;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,pbVar6,4,param_1,*(undefined8 *)(param_1 + 0x30));
    }
  } while( true );
}


