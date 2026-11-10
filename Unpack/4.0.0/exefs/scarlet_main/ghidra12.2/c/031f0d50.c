/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f0d50; name: FUN_031f0d50
 */


undefined8
FUN_031f0d50(long param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  void *__dest;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  void *__src;
  ulong uVar9;
  
  uVar5 = *(uint *)((long)param_2 + 0xc);
  if ((uVar5 & 0x7fffffff) == 0) {
    puVar3 = param_4;
    while( true ) {
      uVar4 = (uint)*puVar3;
      if ((uVar4 >> 0x14 & 1) != 0) break;
      if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_031f0dd8;
    }
    if (puVar3 != (ulong *)0x0) {
      uVar9 = CONCAT44(uVar4,uVar4) & 0xfffff000fffff;
      uVar9 = (ulong)(ushort)puVar3[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                  POPCOUNT((char)(uVar9 >> 8)) +
                                                 POPCOUNT((char)(uVar9 >> 0x10))) + 2];
      goto joined_r0x031f0dcc;
    }
LAB_031f0dd8:
    uVar9 = 0;
joined_r0x031f0dcc:
    if (param_5 == 0) {
      __dest = (void *)*param_2;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x10);
      __src = (void *)*param_2;
      iVar1 = *(int *)(param_2 + 1);
      __dest = (void *)(**(code **)(*plVar8 + 0x18))(plVar8,uVar9 * (long)param_5);
      memcpy(__dest,__src,(long)iVar1 * uVar9);
      if (-1 < (int)uVar5) {
        (**(code **)(*plVar8 + 0x20))(plVar8,__src,uVar9 * uVar5);
      }
      *param_2 = __dest;
      *(int *)((long)param_2 + 0xc) = param_5;
    }
    *(int *)(param_2 + 1) = param_5;
    puVar3 = param_4;
    while( true ) {
      uVar5 = (uint)*puVar3;
      if ((uVar5 >> 0x16 & 1) != 0) break;
      if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_031f0e80;
    }
    if (puVar3 != (ulong *)0x0) {
      uVar5 = uVar5 & 0x3fffff;
      puVar7 = (undefined *)
               puVar3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                   POPCOUNT((char)(uVar5 >> 0x10))) + 2];
      if (puVar7 != (undefined *)0x0) goto LAB_031f0ec4;
    }
LAB_031f0e80:
    puVar3 = param_4;
    while (uVar6 = *puVar3, ((uint)uVar6 >> 6 & 1) == 0) {
      if (((uVar6 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_031f0f30;
    }
    if ((puVar3 != (ulong *)0x0) &&
       (puVar7 = (undefined *)puVar3[(ulong)(byte)POPCOUNT((byte)uVar6 & 0x3f) + 2],
       puVar7 != (undefined *)0x0)) {
LAB_031f0ec4:
      if (puVar7 != PTR_LAB_047e5bb8) {
        puVar3 = param_4;
        if ((*param_4 & 1) == 0) {
          do {
            puVar3 = (ulong *)puVar3[1];
          } while ((*puVar3 & 1) == 0);
        }
        if ((puVar3[2] & 0x1f) == 7) {
          memset(__dest,0,(long)((int)uVar9 * param_5));
        }
        FUN_031db000(puVar7,__dest,param_4,param_5);
      }
      return 0;
    }
LAB_031f0f30:
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


