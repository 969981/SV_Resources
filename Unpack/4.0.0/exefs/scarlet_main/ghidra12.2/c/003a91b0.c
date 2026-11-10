/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a91b0; name: FUN_003a91b0
 */


undefined8 FUN_003a91b0(uint *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  int local_6c;
  ulong local_68;
  
  iVar7 = FUN_003a3470();
  if (iVar7 != 0) {
    do {
      while( true ) {
        iVar7 = FUN_003a33b0(param_1,*(long *)(param_1 + 0x63e) + 0x38);
        if (iVar7 != 0) {
          return 1;
        }
        if ((param_1[0x255] == 0xf1) && (0xc < *(ulong *)(param_1 + 0x626))) break;
        uVar8 = FUN_003a4660(param_1,0xd,*(undefined8 *)(param_1 + 0x25e),0,1,&local_68);
        if ((int)uVar8 < 1) {
          return uVar8;
        }
        if (*(long *)(param_1 + 0x626) == 0xd) {
          pbVar10 = *(byte **)(param_1 + 0x624);
          param_1[0x255] = 0xf1;
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            (**(code **)(param_1 + 0x2e))
                      (0,0,0x100,pbVar10,0xd,param_1,*(undefined8 *)(param_1 + 0x30));
          }
          bVar2 = *pbVar10;
          param_1[0x3a5] = (uint)bVar2;
          bVar3 = pbVar10[1];
          bVar4 = pbVar10[2];
          *(ulong *)(param_1 + 0x3b4) =
               (((ulong)*(ushort *)(pbVar10 + 3) & 0xff00) << 0x28 |
               (ulong)*(ushort *)(pbVar10 + 3) << 0x38) >> 0x30;
          uVar1 = *(undefined4 *)(pbVar10 + 5);
          *(undefined2 *)((long)param_1 + 0x18e6) = *(undefined2 *)(pbVar10 + 9);
          *(undefined4 *)((long)param_1 + 0x18e2) = uVar1;
          uVar5 = *(ushort *)(pbVar10 + 0xb);
          param_1[0x3b2] = 0;
          uVar11 = (((ulong)uVar5 & 0xff00) << 0x28 | (ulong)uVar5 << 0x38) >> 0x30;
          *(ulong *)(param_1 + 0x3a6) = uVar11;
          if ((bVar2 == 0x15) || (param_1[0x1ac] != 0)) {
            uVar6 = *param_1;
joined_r0x003a93c4:
            if ((((uVar6 & 0xff00) == (uint)bVar3 * 0x100) && (uVar11 < 0x4541)) &&
               ((*(long *)(param_1 + 0x174) == 0 ||
                ((uVar6 = *(byte *)(*(long *)(param_1 + 0x174) + 0x250) - 1, 3 < uVar6 ||
                 (uVar11 <= (0x200 << (ulong)(uVar6 & 0x1f) | 0x140))))))) goto LAB_003a9308;
          }
          else {
            uVar6 = (uint)CONCAT11(bVar3,bVar4);
            if (*param_1 == uVar6) goto joined_r0x003a93c4;
          }
          goto LAB_003a943c;
        }
LAB_003a9444:
        param_1[0x626] = 0;
        param_1[0x627] = 0;
        iVar7 = FUN_003a3470(param_1);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
      }
      uVar11 = *(ulong *)(param_1 + 0x3a6);
LAB_003a9308:
      if ((*(long *)(param_1 + 0x626) - 0xdU < uVar11) &&
         ((iVar7 = FUN_003a4660(param_1,uVar11,uVar11,1,1,&local_68), iVar7 < 1 ||
          (local_68 != uVar11)))) {
LAB_003a9430:
        iVar7 = FUN_003c39d0(param_1);
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        goto LAB_003a943c;
      }
      param_1[0x255] = 0xf0;
      lVar9 = FUN_003a36a0(param_1,param_1 + 0x3a4,&local_6c);
      if (lVar9 == 0) {
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0;
        goto LAB_003a9444;
      }
      iVar7 = FUN_003a4300(param_1,lVar9);
      if (iVar7 == 0) {
LAB_003a943c:
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0;
        param_1[0x3b2] = 1;
        goto LAB_003a9444;
      }
      if (*(long *)(param_1 + 0x3a6) != 0) {
        if (local_6c == 0) {
          iVar7 = FUN_003a8d60(param_1,lVar9);
          if (iVar7 != 0) {
            return 1;
          }
          goto LAB_003a9430;
        }
        iVar7 = FUN_003c38d0(param_1);
        if (((iVar7 != 0) || (iVar7 = FUN_003c39f0(param_1), iVar7 != 0)) &&
           (iVar7 = FUN_003a31f0(param_1,*(long *)(param_1 + 0x63e) + 0x28,param_1 + 0x3b6),
           iVar7 < 0)) {
          return 0xffffffff;
        }
        goto LAB_003a943c;
      }
      param_1[0x3b2] = 1;
      iVar7 = FUN_003a3470(param_1);
    } while (iVar7 != 0);
  }
  return 0xffffffff;
}


