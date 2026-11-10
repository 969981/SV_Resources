/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00133a60; name: FUN_00133a60
 */


void FUN_00133a60(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  
  iVar4 = param_2[2];
  lVar7 = (long)iVar4 * 4;
  lVar6 = *(long *)(*param_1 + 0x40);
  iVar2 = *param_2;
  uVar1 = (*(uint *)(lVar6 + lVar7) & 0xffffff | param_3 << 0x18) + 0x1000000;
  *(uint *)(lVar6 + lVar7) = uVar1;
  if (iVar2 != 0x12) {
    *(uint *)(lVar6 + (long)iVar4 * 4) =
         uVar1 & 0xffff8000 | uVar1 & 0x7f | (uint)*(byte *)((long)param_1 + 0x44) << 7;
    bVar3 = *(byte *)((long)param_1 + 0x44);
    cVar5 = bVar3 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar3) {
      if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"function or expression needs too many registers");
      }
      *(char *)(*param_1 + 0xc) = cVar5;
      cVar5 = *(char *)((long)param_1 + 0x44) + '\x01';
    }
    *(char *)((long)param_1 + 0x44) = cVar5;
  }
  return;
}


