/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f672c; name: FUN_031f672c
 */


ulong * FUN_031f672c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  
  puVar8 = *(ulong **)(param_1 + 0x18);
  while (puVar8 != (ulong *)0x0) {
    puVar4 = (ulong *)puVar8[1];
    puVar6 = puVar4;
    while (uVar7 = *puVar6, ((uint)uVar7 >> 3 & 1) == 0) {
      if (((uVar7 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
      goto LAB_031f679c;
    }
    if (puVar6 != (ulong *)0x0) {
      uVar7 = puVar6[(ulong)(byte)POPCOUNT((byte)uVar7 & 7) + 2];
      goto LAB_031f67a0;
    }
LAB_031f679c:
    uVar7 = 0;
LAB_031f67a0:
    do {
      uVar5 = (uint)*puVar4;
      if ((uVar5 >> 0xf & 1) != 0) {
        uVar3 = CONCAT44(uVar5,uVar5) & 0x7fff00007fff;
        uVar3 = puVar4[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2];
        goto LAB_031f67e0;
      }
    } while (((*puVar4 & 9) == 0) && (puVar4 = (ulong *)puVar4[1], puVar4 != (ulong *)0x0));
    uVar3 = 0;
LAB_031f67e0:
    iVar2 = FUN_031e2760(uVar7,uVar3,*param_2,param_2[1]);
    if (iVar2 == 0) {
      *puVar8 = *puVar8 | 1;
      return (ulong *)puVar8[1];
    }
    puVar6 = puVar8 + 2;
    if (-1 < iVar2) {
      puVar6 = puVar8 + 3;
    }
    puVar8 = (ulong *)*puVar6;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar9 = *(long **)(param_1 + 0x60);
    plVar1 = plVar9 + *(int *)(param_1 + 0x68);
    do {
      puVar6 = (ulong *)*plVar9;
      puVar8 = puVar6;
      while (uVar7 = *puVar8, ((uint)uVar7 >> 3 & 1) == 0) {
        if (((uVar7 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
        goto LAB_031f686c;
      }
      if (puVar8 != (ulong *)0x0) {
        uVar7 = puVar8[(ulong)(byte)POPCOUNT((byte)uVar7 & 7) + 2];
        goto LAB_031f6870;
      }
LAB_031f686c:
      uVar7 = 0;
LAB_031f6870:
      puVar8 = puVar6;
      do {
        uVar5 = (uint)*puVar8;
        if ((uVar5 >> 0xf & 1) != 0) {
          uVar3 = CONCAT44(uVar5,uVar5) & 0x7fff00007fff;
          uVar3 = puVar8[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2];
          goto LAB_031f68b4;
        }
      } while (((*puVar8 & 9) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0));
      uVar3 = 0;
LAB_031f68b4:
      iVar2 = FUN_031e2760(uVar7,uVar3,*param_2,param_2[1]);
      if (iVar2 == 0) goto LAB_031f68d0;
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  puVar6 = (ulong *)0x0;
LAB_031f68d0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return puVar6;
}


