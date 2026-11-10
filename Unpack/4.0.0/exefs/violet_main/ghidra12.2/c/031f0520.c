/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f0520; name: FUN_031f0520
 */


undefined8 FUN_031f0520(long param_1,long *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  void *__dest;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  void *__src;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  
  iVar1 = (int)param_2[1];
  puVar2 = param_3;
  while( true ) {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0x14 & 1) != 0) break;
    if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
    goto LAB_031f0590;
  }
  if (puVar2 != (ulong *)0x0) {
    uVar7 = CONCAT44(uVar3,uVar3) & 0xfffff000fffff;
    uVar7 = (ulong)(ushort)puVar2[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))
                                               + POPCOUNT((char)(uVar7 >> 0x10))) + 2];
    goto LAB_031f0594;
  }
LAB_031f0590:
  uVar7 = 0;
LAB_031f0594:
  if (iVar1 - param_4 != 0) {
    iVar6 = (int)uVar7;
    if (iVar1 < param_4) {
      if (iVar1 < param_4) {
        puVar2 = param_3;
        while (uVar4 = *puVar2, ((uint)uVar4 >> 6 & 1) == 0) {
          if (((uVar4 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0)) {
            return 0x80040200;
          }
        }
        if (puVar2 == (ulong *)0x0) {
          return 0x80040200;
        }
        pcVar8 = (code *)puVar2[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x3f) + 2];
        if (pcVar8 == (code *)0x0) {
          return 0x80040200;
        }
      }
      else {
        pcVar8 = (code *)0x0;
      }
      uVar3 = *(uint *)((long)param_2 + 0xc);
      if (((ulong)uVar3 & 0x7fffffff) < (ulong)(long)param_4) {
        plVar5 = *(long **)(param_1 + 0x10);
        __src = (void *)*param_2;
        __dest = (void *)(**(code **)(*plVar5 + 0x18))(plVar5,uVar7 * (long)param_4,iVar1 - param_4)
        ;
        memcpy(__dest,__src,(long)(iVar6 * iVar1));
        if (-1 < (int)uVar3) {
          (**(code **)(*plVar5 + 0x20))(plVar5,__src,uVar3 * uVar7);
        }
        *param_2 = (long)__dest;
        *(int *)((long)param_2 + 0xc) = param_4;
      }
      *(int *)(param_2 + 1) = param_4;
      if (iVar1 < param_4) {
        (*pcVar8)(*param_2 + (long)(iVar6 * iVar1),param_3,param_4 - iVar1);
      }
    }
    else {
      *(int *)(param_2 + 1) = param_4;
      puVar2 = param_3;
      while (uVar7 = *puVar2, ((uint)uVar7 >> 8 & 1) == 0) {
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        puVar2 = (ulong *)puVar2[1];
        if (puVar2 == (ulong *)0x0) {
          return 0;
        }
      }
      if (puVar2 == (ulong *)0x0) {
        return 0;
      }
      if ((code *)puVar2[(ulong)(byte)POPCOUNT((char)uVar7) + 2] == (code *)0x0) {
        return 0;
      }
      (*(code *)puVar2[(ulong)(byte)POPCOUNT((char)uVar7) + 2])
                (*param_2 + (long)(iVar6 * param_4),param_3);
    }
  }
  return 0;
}


