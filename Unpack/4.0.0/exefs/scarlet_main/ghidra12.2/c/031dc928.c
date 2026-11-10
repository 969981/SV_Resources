/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dc928; name: FUN_031dc928
 */


void FUN_031dc928(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  short *psVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = -0x8000000000000000;
  FUN_031dcad0(param_1,&local_30);
  lVar1 = local_28;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)*param_1;
    if ((uVar3 >> 8 & 1) != 0) {
      bVar10 = POPCOUNT((char)*param_1);
      uVar2 = (ulong)(CONCAT12(bVar10,(ushort)bVar10) & 0xff);
      if ((undefined *)param_1[uVar2 + 2] == PTR_LAB_047e5ba0) {
        puVar6 = (ulong *)param_1[1];
        puVar9 = param_1;
        if (puVar6 != (ulong *)0x0) {
          while (uVar7 = *puVar6, ((uint)uVar7 >> 8 & 1) == 0) {
            if (((uVar7 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
            goto joined_r0x031dc9e0;
          }
          if (puVar6[(ulong)(byte)POPCOUNT((char)uVar7) + 2] != 0) {
            puVar5 = PTR_LAB_047e5ba8;
            goto LAB_031dca88;
          }
        }
joined_r0x031dc9e0:
        do {
          if ((uVar3 >> 0x17 & 1) != 0) goto LAB_031dc9f4;
          puVar9 = (undefined8 *)puVar9[1];
          if (puVar9 == (undefined8 *)0x0) goto LAB_031dca84;
          uVar3 = (uint)*puVar9;
        } while( true );
      }
    }
  }
LAB_031dca8c:
  uVar2 = (ulong)local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_30 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_30,uVar2 << 3);
  }
  return;
LAB_031dc9f4:
  uVar7 = CONCAT44(uVar3,uVar3) & 0x7fffff007fffff;
  psVar4 = (short *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                        POPCOUNT((char)(uVar7 >> 0x10))) + 2];
  puVar5 = (undefined *)0x0;
  if (psVar4 != (short *)0x0) {
    if ((long)*psVar4 != 0) {
      plVar8 = (long *)(psVar4 + 4);
      do {
        puVar6 = (ulong *)*plVar8;
        while (uVar7 = *puVar6, ((uint)uVar7 >> 8 & 1) == 0) {
          if (((uVar7 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
          goto LAB_031dca78;
        }
        if ((puVar6 != (ulong *)0x0) &&
           (puVar5 = PTR_LAB_047e5ba8, puVar6[(ulong)(byte)POPCOUNT((char)uVar7) + 2] != 0))
        goto LAB_031dca88;
LAB_031dca78:
        plVar8 = plVar8 + 1;
      } while (plVar8 != (long *)(psVar4 + (long)*psVar4 * 4 + 4));
    }
LAB_031dca84:
    puVar5 = (undefined *)0x0;
  }
LAB_031dca88:
  param_1[uVar2 + 2] = puVar5;
  goto LAB_031dca8c;
}


