/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031db000; name: FUN_031db000
 */


undefined8 FUN_031db000(code *param_1,long param_2,ulong *param_3,int param_4)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_3 == (ulong *)PTR_DAT_047ddc28) {
LAB_031db164:
    if (0 < param_4) {
      puVar2 = param_3;
      while( true ) {
        uVar3 = (uint)*puVar2;
        if ((uVar3 >> 0x14 & 1) != 0) break;
        if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
        goto LAB_031db1b0;
      }
      if (puVar2 != (ulong *)0x0) {
        uVar5 = CONCAT44(uVar3,uVar3) & 0xfffff000fffff;
        uVar5 = (ulong)(ushort)puVar2[(ulong)(byte)(POPCOUNT((char)uVar5) +
                                                    POPCOUNT((char)(uVar5 >> 8)) +
                                                   POPCOUNT((char)(uVar5 >> 0x10))) + 2];
        goto LAB_031db1b4;
      }
LAB_031db1b0:
      uVar5 = 0;
LAB_031db1b4:
      do {
        uVar6 = *(undefined8 *)(param_2 + 8);
        (*param_1)(param_2,param_3,1);
        *(undefined8 *)(param_2 + 8) = uVar6;
        param_2 = uVar5 + param_2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else {
    puVar2 = param_3;
    do {
      uVar3 = (uint)*puVar2;
      if ((uVar3 >> 0xd & 1) != 0) {
        puVar4 = (ulong *)0x0;
        if (puVar2 != (ulong *)0x0) {
          uVar5 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
          puVar4 = puVar2 + (ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2;
        }
        goto LAB_031db07c;
      }
      if ((*puVar2 & 1) != 0) {
        puVar4 = (ulong *)0x0;
        goto LAB_031db07c;
      }
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
    puVar4 = (ulong *)0x0;
LAB_031db07c:
    puVar2 = (ulong *)PTR_DAT_047ddc28;
LAB_031db084:
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0xd & 1) == 0) goto code_r0x031db08c;
    if ((puVar2 != (ulong *)0x0) && (puVar4 != (ulong *)0x0)) {
      uVar5 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
      while( true ) {
        DataMemoryBarrier(2,1);
        uVar3 = (uint)puVar2[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2
                            ];
        if (((DAT_04884450 & 1) == 0) || ((((uint)*puVar4 ^ uVar3) & 3) == 0)) break;
        DataMemoryBarrier(2,2);
        Yield();
      }
      iVar1 = (int)(*puVar4 >> 0x11);
      if ((iVar1 < (int)(puVar2[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)))
                                + 2] >> 0x11)) || ((int)(uVar3 >> 2 & 0x7fff) < iVar1))
      goto LAB_031db134;
      goto LAB_031db164;
    }
LAB_031db104:
    puVar2 = (ulong *)PTR_DAT_047ddc28;
    do {
      if ((*puVar2 & 1) != 0) break;
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
    if (param_3 != (ulong *)0x0) {
      puVar4 = param_3;
      do {
        if (puVar4 == puVar2) goto LAB_031db164;
        puVar4 = (ulong *)puVar4[1];
      } while (puVar4 != (ulong *)0x0);
    }
LAB_031db134:
    (*param_1)(param_2,param_3,param_4);
  }
  return 0;
code_r0x031db08c:
  if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
  goto LAB_031db104;
  goto LAB_031db084;
}


