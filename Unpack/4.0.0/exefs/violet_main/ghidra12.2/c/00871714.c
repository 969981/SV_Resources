/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00871714; name: FUN_00871714
 */


void FUN_00871714(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + (long)param_2;
  }
  lVar1 = lVar1 + (ulong)((param_3 >> 8) << 3) * 4;
  plVar8 = (long *)(param_1 + 0x50);
  uVar6 = (param_3 >> 1 & 0xf) << 1;
  lVar7 = (long)(int)(*(int *)(param_1 + 0x40 +
                              (ulong)(param_3 >> 8) * 0x60 + *(long *)(param_1 + 0x40) + 0x50) +
                     (param_3 >> 1 & 0x7f)) * 4 + *plVar8;
  cVar4 = *(char *)((long)plVar8 + lVar7 + 2);
  cVar5 = *(char *)((long)plVar8 + lVar7 + 3);
  uVar11 = (ulong)(param_3 >> 5 & 7);
  uVar3 = *(uint *)(lVar1 + uVar11 * 4);
  cVar12 = cVar4;
  if (cVar4 != '\x03') {
    cVar12 = '\0';
  }
  cVar2 = cVar4;
  if (cVar4 != '\x04') {
    cVar2 = cVar12;
  }
  cVar12 = '\x01';
  if (cVar4 != cVar5) {
    cVar12 = '\x02';
  }
  uVar9 = 1 << (ulong)(param_3 & 1);
  if (*(char *)((long)plVar8 + lVar7 + 1) != cVar5) {
    cVar2 = cVar12;
  }
  if (cVar2 != '\x02') {
    uVar9 = 3;
  }
  uVar10 = 3;
  if ((param_4 & 1) == 0) {
    uVar10 = 0;
  }
  *(uint *)(lVar1 + uVar11 * 4) =
       (uVar3 >> (ulong)uVar6 & 3 & (uVar9 ^ 0xffffffff) | uVar9 & uVar10) << (ulong)uVar6 |
       uVar3 & (3 << (ulong)uVar6 ^ 0xffffffffU);
  return;
}


