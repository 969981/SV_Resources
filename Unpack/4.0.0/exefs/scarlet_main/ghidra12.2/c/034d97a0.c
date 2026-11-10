/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d97a0; name: FUN_034d97a0
 */


undefined8 FUN_034d97a0(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  memset(param_1,0,0x48);
  lVar5 = *param_2;
  if ((((*(ushort *)(lVar5 + 0xc) & 0x7c) == 4) && (*(long *)(lVar5 + 0x10) == 0)) &&
     (*(int *)(lVar5 + 4) == -1)) {
    uVar3 = 2;
  }
  else {
    local_24 = 0;
    local_28 = 0;
    local_30 = 0x3f800000;
    local_23 = *(undefined1 *)((long)param_2 + 10);
    local_40 = 0x80000000000;
    local_38 = 0;
    *(short *)(param_1 + 8) = (short)param_2[1];
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 10);
    bVar2 = (*(ushort *)(lVar5 + 0xc) & 0x7c) == 0xc;
    *(char *)((long)param_1 + 0x42) = bVar2 << 1;
    if (bVar2) {
      if (param_2[2] == 0) {
        return 0x2e;
      }
      uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x40))
                        (*(long **)PTR_DAT_047e2fc8,param_2[2],(int)param_2[3],&local_30,param_1);
    }
    else {
      uVar1 = *(ushort *)(lVar5 + 0xc);
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 0x500) == 0) {
          local_4c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_4c = 0xffffffff;
        }
        local_50 = (byte)uVar1 & 1;
        uStack_64 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_60 = 0;
        local_58 = 0;
        uStack_48 = 0;
        local_68 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x38))
                          (*(long **)PTR_DAT_047e2fc8,*(undefined4 *)(lVar5 + 4),&local_68,&local_30
                           ,&local_40,param_1,*PTR_DAT_047e6980);
      }
      else {
        if ((uVar1 & 0x500) == 0) {
          local_4c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_4c = 0xffffffff;
        }
        local_50 = (byte)uVar1 & 1;
        uStack_64 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_60 = 0;
        local_58 = 0;
        uStack_48 = 0;
        local_68 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x30))
                          (*(long **)PTR_DAT_047e2fc8,*(undefined8 *)(lVar5 + 0x10),&local_68,
                           &local_30,&local_40,param_1,*PTR_DAT_047e6980);
      }
    }
    if ((int)uVar3 == 1) {
      bVar4 = *(byte *)((long)param_1 + 0x42);
      if ((((bVar4 >> 1 & 1) == 0) && (param_2[2] != 0)) && ((int)param_2[3] != 0)) {
        param_1[2] = param_2[2];
        lVar5 = param_2[3];
        bVar4 = bVar4 & 0xcf | 8;
        *(byte *)((long)param_1 + 0x42) = bVar4;
        *(int *)((long)param_1 + 0x24) = (int)lVar5;
      }
      else {
        *(byte *)((long)param_1 + 0x42) = bVar4 & 199;
        uVar3 = (**(code **)(*(long *)*param_1 + 0x68))();
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        bVar4 = *(byte *)((long)param_1 + 0x42);
      }
      uVar3 = 1;
      *(byte *)((long)param_1 + 0x42) = bVar4 & 0x3f;
    }
  }
  return uVar3;
}


