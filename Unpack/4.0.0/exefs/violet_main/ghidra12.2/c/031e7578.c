/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e7578; name: FUN_031e7578
 */


undefined4 FUN_031e7578(ulong *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *local_38;
  ulong *local_18;
  
  uVar1 = 0x80040200;
  if ((*param_1 != 0) && (*param_2 != 0)) {
    puVar3 = (ulong *)param_1[1];
    puVar4 = puVar3;
    if ((*puVar3 & 1) == 0) {
      do {
        puVar4 = (ulong *)puVar4[1];
      } while ((*puVar4 & 1) == 0);
    }
    puVar8 = (ulong *)param_2[1];
    uVar5 = *puVar8;
    uVar2 = (uint)uVar5;
    puVar7 = puVar8;
    if ((uVar5 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((((uint)puVar7[2] ^ (uint)puVar4[2]) & 0x1f) == 0) {
      if (puVar8 != (ulong *)0x0) {
        puVar4 = puVar8;
        if (puVar8 == puVar3) {
LAB_031e76b0:
          uVar5 = 0;
          do {
            uVar2 = (uint)*puVar8;
            if ((uVar2 >> 0x15 & 1) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = CONCAT44(uVar2,uVar2) & 0x1fffff001fffff;
              uVar6 = puVar8[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                          POPCOUNT((char)(uVar6 >> 0x10))) + 2];
            }
            uVar5 = uVar6 | uVar5;
          } while (((*puVar8 & 1) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0));
          if (((((uint)uVar5 >> 3 & 1) == 0) && ((param_1[2] & 1) == 0)) &&
             (((puVar3 = (ulong *)param_1[1], puVar3 < (ulong *)0x2 ||
               (uVar2 = (uint)*puVar3, (uVar2 >> 0x11 & 1) == 0)) ||
              (uVar5 = CONCAT44(uVar2,uVar2) & 0x1ffff0001ffff,
              (puVar3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                   POPCOUNT((char)(uVar5 >> 0x10))) + 2] & 0x300000) == 0 ||
              (puVar3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                   POPCOUNT((char)(uVar5 >> 0x10))) + 2] & 0x500000) == 0)))) {
            puVar4 = (ulong *)param_2[1];
            uVar5 = 0;
            do {
              uVar2 = (uint)*puVar4;
              if ((uVar2 >> 0x15 & 1) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = CONCAT44(uVar2,uVar2) & 0x1fffff001fffff;
                uVar6 = puVar4[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                            POPCOUNT((char)(uVar6 >> 0x10))) + 2];
              }
              uVar5 = uVar6 | uVar5;
            } while (((*puVar4 & 1) == 0) && (puVar4 = (ulong *)puVar4[1], puVar4 != (ulong *)0x0));
            if (((uint)uVar5 >> 3 & 1) == 0) {
              puVar4 = puVar3;
              while( true ) {
                uVar2 = (uint)*puVar4;
                if ((uVar2 >> 9 & 1) != 0) break;
                if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
                goto LAB_031e77e8;
              }
              if ((puVar4 != (ulong *)0x0) &&
                 (uVar5 = CONCAT44(uVar2,uVar2) & 0x1ff000001ff,
                 (code *)puVar4[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)))
                                + 2] != (code *)0x0)) {
                (*(code *)puVar4[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)))
                                 + 2])(*param_1,*param_2,puVar3,1);
                return 0;
              }
            }
          }
        }
        else {
          while ((uVar2 >> 0xd & 1) == 0) {
            if (((uVar5 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0)) {
              local_18 = (ulong *)0x0;
              goto LAB_031e7658;
            }
            uVar5 = *puVar4;
            uVar2 = (uint)uVar5;
          }
          uVar5 = CONCAT44(uVar2,uVar2) & 0x1fff00001fff;
          local_18 = puVar4 + (ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) +
                              2;
LAB_031e7658:
          local_38 = puVar3;
          while( true ) {
            uVar2 = (uint)*local_38;
            if ((uVar2 >> 0xd & 1) != 0) break;
            if (((*local_38 & 1) != 0) ||
               (local_38 = (ulong *)local_38[1], local_38 == (ulong *)0x0)) goto LAB_031e77bc;
          }
          if (local_38 != (ulong *)0x0) {
            uVar5 = CONCAT44(uVar2,uVar2) & 0x1fff00001fff;
            local_38 = local_38 +
                       (ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2;
            if (local_18 == (ulong *)0x0) goto joined_r0x031e77c0;
            uVar5 = FUN_031dd354(&local_18,&local_38);
            if ((uVar5 & 1) == 0) goto LAB_031e77e8;
            goto LAB_031e76b0;
          }
LAB_031e77bc:
          local_38 = (ulong *)0x0;
joined_r0x031e77c0:
          for (; (puVar3 != (ulong *)0x0 && ((*puVar3 & 1) == 0)); puVar3 = (ulong *)puVar3[1]) {
          }
          puVar4 = puVar8;
          do {
            if (puVar4 == puVar3) goto LAB_031e76b0;
            puVar4 = (ulong *)puVar4[1];
          } while (puVar4 != (ulong *)0x0);
        }
      }
LAB_031e77e8:
      local_18 = param_1;
      uVar1 = FUN_031e7848(&local_18,param_2);
    }
  }
  return uVar1;
}


