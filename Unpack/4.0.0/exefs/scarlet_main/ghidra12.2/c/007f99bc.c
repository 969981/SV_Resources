/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f99bc; name: FUN_007f99bc
 */


void FUN_007f99bc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  
  plVar5 = (long *)PTR_DAT_047d0860;
  if (*(char *)(param_2 + 8) != '\0') {
    lVar4 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    if (lVar4 != 0) {
      local_78 = 0;
      local_70 = 0;
      local_80 = 0;
      lVar12 = *(long *)(lVar4 + 0x20);
      if (lVar12 == lVar4 + 0x18) {
LAB_007f9c14:
        *(undefined1 *)(param_2 + 0x647c) = 0;
        if (local_80._1_1_ != '\0') goto LAB_007f9b54;
LAB_007f9c20:
        *(undefined1 *)(param_2 + 0x64ac) = 0;
        if (local_80._2_1_ == '\0') goto LAB_007f9c2c;
LAB_007f9b5c:
        if (local_80._3_1_ != '\0') goto LAB_007f9b64;
LAB_007f9c38:
        *(undefined1 *)(param_2 + 0x650c) = 0;
        if (local_80._4_1_ == '\0') goto LAB_007f9c44;
LAB_007f9b6c:
        if (local_80._5_1_ != '\0') goto LAB_007f9b74;
LAB_007f9c50:
        *(undefined1 *)(param_2 + 0x656c) = 0;
        if (local_80._6_1_ == '\0') goto LAB_007f9c5c;
LAB_007f9b7c:
        if (local_80._7_1_ != '\0') goto LAB_007f9b84;
LAB_007f9c68:
        *(undefined1 *)(param_2 + 0x65cc) = 0;
        if ((char)local_78 == '\0') goto LAB_007f9c74;
LAB_007f9b8c:
        if (local_78._1_1_ != '\0') goto LAB_007f9b94;
LAB_007f9c80:
        *(undefined1 *)(param_2 + 0x662c) = 0;
        if (local_78._2_1_ == '\0') goto LAB_007f9c8c;
LAB_007f9b9c:
        if (local_78._3_1_ != '\0') goto LAB_007f9ba4;
LAB_007f9c98:
        *(undefined1 *)(param_2 + 0x668c) = 0;
        if (local_78._4_1_ == '\0') goto LAB_007f9ca4;
LAB_007f9bac:
        if (local_78._5_1_ != '\0') goto LAB_007f9bb4;
LAB_007f9cb0:
        *(undefined1 *)(param_2 + 0x66ec) = 0;
        if (local_78._6_1_ == '\0') goto LAB_007f9cbc;
LAB_007f9bbc:
        if (local_78._7_1_ != '\0') goto LAB_007f9bc4;
LAB_007f9cc8:
        *(undefined1 *)(param_2 + 0x674c) = 0;
        if ((char)local_70 == '\0') goto LAB_007f9cd4;
LAB_007f9bcc:
        if (local_70._1_1_ != '\0') goto LAB_007f9bd4;
LAB_007f9ce0:
        *(undefined1 *)(param_2 + 0x67ac) = 0;
        if (local_70._2_1_ == '\0') goto LAB_007f9cec;
LAB_007f9bdc:
        if (local_70._3_1_ != '\0') goto LAB_007f9be4;
LAB_007f9cf8:
        *(undefined1 *)(param_2 + 0x680c) = 0;
        if (local_70._4_1_ == '\0') goto LAB_007f9d04;
LAB_007f9bec:
        if (local_70._5_1_ != '\0') goto LAB_007f9bf4;
LAB_007f9d10:
        *(undefined1 *)(param_2 + 0x686c) = 0;
        if (local_70._6_1_ == '\0') goto LAB_007f9d1c;
LAB_007f9bfc:
        if (local_70._7_1_ != '\0') goto LAB_007f9c04;
LAB_007f9d28:
        *(undefined1 *)(param_2 + 0x68cc) = 0;
        puVar8 = (ulong *)*plVar5;
        if (puVar8 == (ulong *)0x0) goto LAB_007f9d34;
LAB_007f9c0c:
        uVar11 = *puVar8;
      }
      else {
        lVar13 = *(long *)(lVar4 + 0x98);
        do {
          if ((lVar13 != *(long *)(lVar12 + 0x10)) &&
             (uVar11 = (ulong)*(byte *)(*(long *)(lVar12 + 0x10) + 0x28), uVar11 < 0x18)) {
            *(undefined1 *)((long)local_90 + uVar11 + 0x10) = 1;
            uVar3 = FUN_007f4498();
            lVar6 = param_2 + uVar11 * 0x30;
            *(undefined4 *)(lVar6 + 0x6450) = uVar3;
            uVar3 = FUN_007f44e4(*(undefined8 *)(lVar12 + 0x10));
            *(undefined4 *)(lVar6 + 0x6454) = uVar3;
            uVar3 = FUN_007f4508(*(undefined8 *)(lVar12 + 0x10));
            *(undefined4 *)(lVar6 + 0x6458) = uVar3;
            lVar7 = *(long *)(lVar12 + 0x10);
            uVar3 = *(undefined4 *)(lVar7 + 0x58);
            uVar9 = *(undefined4 *)(lVar7 + 0x5c);
            puVar10 = (undefined4 *)(lVar6 + 0x6460);
            if (*(char *)(lVar6 + 0x647c) == '\0') {
              *puVar10 = uVar3;
              *(undefined4 *)(param_2 + uVar11 * 0x30 + 0x6468) = uVar9;
              *(char *)(lVar6 + 0x647c) = '\x01';
            }
            else {
              lVar6 = param_2 + uVar11 * 0x30;
              uVar1 = *puVar10;
              uVar2 = *(undefined4 *)(lVar6 + 0x6468);
              *puVar10 = uVar3;
              *(undefined4 *)(lVar6 + 0x6468) = uVar9;
              uVar3 = uVar1;
              uVar9 = uVar2;
            }
            lVar6 = param_2 + uVar11 * 0x30;
            *(undefined4 *)(lVar6 + 0x645c) = uVar3;
            *(undefined4 *)(lVar6 + 0x6464) = uVar9;
            uVar3 = *(undefined4 *)(lVar7 + 0x70);
            uVar9 = *(undefined4 *)(lVar7 + 0x74);
            *(undefined4 *)(lVar6 + 0x646c) = *(undefined4 *)(lVar6 + 0x6470);
            *(undefined4 *)(lVar6 + 0x6474) = *(undefined4 *)(lVar6 + 0x6478);
            *(undefined4 *)(lVar6 + 0x6470) = uVar3;
            *(undefined4 *)(lVar6 + 0x6478) = uVar9;
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 != lVar4 + 0x18);
        plVar5 = (long *)PTR_DAT_047d0860;
        if ((char)local_80 == '\0') goto LAB_007f9c14;
        if (local_80._1_1_ == '\0') goto LAB_007f9c20;
LAB_007f9b54:
        if (local_80._2_1_ != '\0') goto LAB_007f9b5c;
LAB_007f9c2c:
        *(undefined1 *)(param_2 + 0x64dc) = 0;
        if (local_80._3_1_ == '\0') goto LAB_007f9c38;
LAB_007f9b64:
        if (local_80._4_1_ != '\0') goto LAB_007f9b6c;
LAB_007f9c44:
        *(undefined1 *)(param_2 + 0x653c) = 0;
        if (local_80._5_1_ == '\0') goto LAB_007f9c50;
LAB_007f9b74:
        if (local_80._6_1_ != '\0') goto LAB_007f9b7c;
LAB_007f9c5c:
        *(undefined1 *)(param_2 + 0x659c) = 0;
        if (local_80._7_1_ == '\0') goto LAB_007f9c68;
LAB_007f9b84:
        if ((char)local_78 != '\0') goto LAB_007f9b8c;
LAB_007f9c74:
        *(undefined1 *)(param_2 + 0x65fc) = 0;
        if (local_78._1_1_ == '\0') goto LAB_007f9c80;
LAB_007f9b94:
        if (local_78._2_1_ != '\0') goto LAB_007f9b9c;
LAB_007f9c8c:
        *(undefined1 *)(param_2 + 0x665c) = 0;
        if (local_78._3_1_ == '\0') goto LAB_007f9c98;
LAB_007f9ba4:
        if (local_78._4_1_ != '\0') goto LAB_007f9bac;
LAB_007f9ca4:
        *(undefined1 *)(param_2 + 0x66bc) = 0;
        if (local_78._5_1_ == '\0') goto LAB_007f9cb0;
LAB_007f9bb4:
        if (local_78._6_1_ != '\0') goto LAB_007f9bbc;
LAB_007f9cbc:
        *(undefined1 *)(param_2 + 0x671c) = 0;
        if (local_78._7_1_ == '\0') goto LAB_007f9cc8;
LAB_007f9bc4:
        if ((char)local_70 != '\0') goto LAB_007f9bcc;
LAB_007f9cd4:
        *(undefined1 *)(param_2 + 0x677c) = 0;
        if (local_70._1_1_ == '\0') goto LAB_007f9ce0;
LAB_007f9bd4:
        if (local_70._2_1_ != '\0') goto LAB_007f9bdc;
LAB_007f9cec:
        *(undefined1 *)(param_2 + 0x67dc) = 0;
        if (local_70._3_1_ == '\0') goto LAB_007f9cf8;
LAB_007f9be4:
        if (local_70._4_1_ != '\0') goto LAB_007f9bec;
LAB_007f9d04:
        *(undefined1 *)(param_2 + 0x683c) = 0;
        if (local_70._5_1_ == '\0') goto LAB_007f9d10;
LAB_007f9bf4:
        if (local_70._6_1_ != '\0') goto LAB_007f9bfc;
LAB_007f9d1c:
        *(undefined1 *)(param_2 + 0x689c) = 0;
        if (local_70._7_1_ == '\0') goto LAB_007f9d28;
LAB_007f9c04:
        puVar8 = (ulong *)*plVar5;
        if (puVar8 != (ulong *)0x0) goto LAB_007f9c0c;
LAB_007f9d34:
        local_90[0] = 0;
        FUN_007935cc(local_90);
        uVar11 = local_90[0];
      }
      lVar4 = *(long *)(param_2 + 0x68e0);
      plVar5 = (long *)FUN_0079365c();
      uVar3 = 0;
      if (*plVar5 != 0) {
        uVar3 = (undefined4)((long)(uVar11 - lVar4) / *plVar5);
      }
      *(undefined4 *)(param_2 + 0x68d0) = uVar3;
      local_90[0] = local_90[0] & 0xffffffff00000000;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_68);
      puVar8 = local_90;
      goto LAB_007f9d78;
    }
  }
  local_80 = CONCAT44(local_80._4_4_,0x10408);
  local_90[0] = local_90[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_80 | 4),(Result *)local_90);
  puVar8 = &local_80;
LAB_007f9d78:
  FUN_00cbd7c0(param_1,puVar8);
  return;
}


