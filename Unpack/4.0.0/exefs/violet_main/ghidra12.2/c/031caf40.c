/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031caf40; name: FUN_031caf40
 */


undefined8 FUN_031caf40(void *param_1,ulong *param_2,void *param_3,ulong *param_4,int param_5)

{
  uint uVar1;
  size_t __n;
  ulong uVar2;
  
  if (0 < param_5) {
    while( true ) {
      uVar1 = (uint)*param_4;
      if ((uVar1 >> 0x14 & 1) != 0) break;
      if (((*param_4 & 1) != 0) || (param_4 = (ulong *)param_4[1], param_4 == (ulong *)0x0))
      goto LAB_031cafa8;
    }
    if (param_4 != (ulong *)0x0) {
      uVar1 = uVar1 & 0xfffff;
      __n = (size_t)(ushort)param_4[(ulong)(byte)(POPCOUNT((char)uVar1) +
                                                  POPCOUNT((char)(uVar1 >> 8)) +
                                                 POPCOUNT((char)(uVar1 >> 0x10))) + 2];
      goto LAB_031cafac;
    }
LAB_031cafa8:
    __n = 0;
LAB_031cafac:
    uVar1 = (uint)*param_2;
    if ((uVar1 >> 0x14 & 1) == 0) {
      if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
      goto LAB_031cafec;
      goto LAB_031cafac;
    }
    if (param_2 != (ulong *)0x0) {
      uVar1 = uVar1 & 0xfffff;
      uVar2 = (ulong)(ushort)param_2[(ulong)(byte)(POPCOUNT((char)uVar1) +
                                                   POPCOUNT((char)(uVar1 >> 8)) +
                                                  POPCOUNT((char)(uVar1 >> 0x10))) + 2];
      goto LAB_031caff0;
    }
LAB_031cafec:
    uVar2 = 0;
LAB_031caff0:
    do {
      memcpy(param_1,param_3,__n);
      param_1 = (void *)(uVar2 + (long)param_1);
      param_3 = (void *)(__n + (long)param_3);
      *(undefined4 *)((long)param_1 + -4) = 0;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return 0;
}


