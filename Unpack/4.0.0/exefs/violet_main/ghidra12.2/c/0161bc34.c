/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0161bc34; name: FUN_0161bc34
 */


undefined8
FUN_0161bc34(long param_1,long *param_2,short param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_3 == 0x2a4) && (uVar4 = (**(code **)(*param_2 + 0x220))(param_2,0xf), (uVar4 & 1) != 0)
     ) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290);
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar3 = FUN_010e161c(uVar5,uVar3);
    uVar4 = FUN_0173f398(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),uVar3,param_4);
    if ((uVar4 & 1) != 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0x11e;
        *(undefined8 *)(param_5 + 6) = 0;
        *(undefined8 *)(param_5 + 8) = 0;
        *(undefined2 *)(param_5 + 1) = 0x200;
        *(undefined8 *)(param_5 + 2) = 0;
        *(undefined8 *)(param_5 + 4) = 0;
        uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
        cVar2 = *(char *)((long)param_5 + 5);
        if (-1 < cVar2) {
          cVar1 = cVar2 + '\x10';
          *(char *)((long)param_5 + 5) = cVar1;
          param_5[(ulong)((uint)(int)cVar2 >> 4 & 0xf) + 2] = uVar3;
          if (-1 < cVar1) {
            *(char *)((long)param_5 + 5) = cVar2 + ' ';
            param_5[(ulong)((uint)(int)cVar1 >> 4 & 0xf) + 2] = 0x2a4;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


