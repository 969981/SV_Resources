/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f9e68; name: FUN_034f9e68
 */


undefined8 FUN_034f9e68(long param_1,undefined8 param_2,undefined1 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  byte local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x248);
  if ((((*(ushort *)(lVar5 + 0xc) & 0x7c) == 4) && (*(long *)(lVar5 + 0x10) == 0)) &&
     (*(int *)(lVar5 + 4) == -1)) {
    uVar3 = 2;
  }
  else {
    local_18 = 0;
    local_20 = 0x3f800000;
    local_13 = (undefined1)(int)*(float *)(lVar4 + 0x2c0);
    bVar2 = (*(ushort *)(lVar5 + 0xc) & 0x7c) == 0xc;
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | bVar2 << 5;
    local_14 = param_3;
    if (bVar2) {
      if (*(long *)(lVar4 + 0x2e0) == 0) {
        uVar3 = 0x2e;
      }
      else {
        uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x40))
                          (*(long **)PTR_DAT_047e2fc8,*(long *)(lVar4 + 0x2e0),
                           *(undefined4 *)(lVar4 + 0x2e8),&local_20,param_1 + 0x58);
      }
    }
    else {
      uVar1 = *(ushort *)(lVar5 + 0xc);
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 0x500) == 0) {
          local_2c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_2c = 0xffffffff;
        }
        local_30 = (byte)uVar1 & 1;
        uStack_44 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_40 = 0;
        local_38 = 0;
        uStack_28 = 0;
        local_48 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x38))
                          (*(long **)PTR_DAT_047e2fc8,*(undefined4 *)(lVar5 + 4),&local_48,&local_20
                           ,param_2,param_1 + 0x58,*PTR_DAT_047e6980);
      }
      else {
        if ((uVar1 & 0x500) == 0) {
          local_2c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_2c = 0xffffffff;
        }
        local_30 = (byte)uVar1 & 1;
        uStack_44 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_40 = 0;
        local_38 = 0;
        uStack_28 = 0;
        local_48 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x30))
                          (*(long **)PTR_DAT_047e2fc8,*(undefined8 *)(lVar5 + 0x10),&local_48,
                           &local_20,param_2,param_1 + 0x58,*PTR_DAT_047e6980);
      }
    }
  }
  return uVar3;
}


