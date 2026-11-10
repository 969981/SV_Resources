/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001334b0; name: FUN_001334b0
 */


void FUN_001334b0(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  do {
    if (param_2 == 0xffffffff) {
      return;
    }
    puVar3 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2 * 4);
    uVar4 = *puVar3;
    iVar5 = (uVar4 >> 7) - 0xffffff;
    uVar2 = 0xffffffff;
    if (iVar5 != -1) {
      uVar2 = param_2 + iVar5 + 1;
    }
    if ((int)param_2 < 1) {
LAB_0013354c:
      puVar6 = puVar3;
      uVar1 = uVar4;
    }
    else {
      uVar1 = puVar3[-1];
      puVar6 = puVar3 + -1;
      if (((byte)(&DAT_03cb602b)[(ulong)uVar1 & 0x7f] >> 4 & 1) == 0) goto LAB_0013354c;
    }
    if ((uVar1 & 0x7f) == 0x43) {
      *puVar6 = uVar1 & 0x8000 | uVar1 >> 9 & 0x7f80 | 0x42;
      iVar5 = ~param_2 + param_3;
      if (iVar5 + 0xffffffU >> 0x19 != 0) {
LAB_001335a8:
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"control structure too long");
      }
      puVar3 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2 * 4);
      uVar4 = *puVar3;
    }
    else {
      iVar5 = ~param_2 + param_3;
      if (iVar5 + 0xffffffU >> 0x19 != 0) goto LAB_001335a8;
    }
    *puVar3 = (uVar4 & 0x7f | iVar5 << 7) + 0x7fffff80;
    param_2 = uVar2;
  } while( true );
}


