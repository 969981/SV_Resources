/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5cdc4; name: FUN_00e5cdc4
 */


void FUN_00e5cdc4(undefined8 *param_1,float param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *__s;
  ulong uVar5;
  long *__s_00;
  ulong uVar6;
  ulong local_58;
  
  puVar1 = PTR_DAT_047d1a08;
  local_58 = 0x90;
  __s = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
  uVar4 = local_58;
  uVar6 = local_58 >> 2;
  if (((ulong)__s & 0xf) == 0) {
    __s_00 = __s;
    uVar5 = uVar6;
  }
  else {
    uVar5 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    __s_00 = (long *)((long)__s + uVar3 * 4);
    uVar5 = uVar6 - uVar3;
    if (__s < __s_00) {
      memset(__s,0,uVar3 << 2);
    }
    else {
      __s_00 = __s;
    }
  }
  if ((3 < uVar5) && (0 < (long)(uVar5 & 0xfffffffffffffffc))) {
    plVar2 = (long *)((long)__s_00 + (uVar5 & 0xfffffffffffffffc) * 4);
    if (plVar2 <= __s_00 + 2) {
      plVar2 = __s_00 + 2;
    }
    memset(__s_00,0,(long)plVar2 + ~(ulong)__s_00 + 0x10 & 0xfffffffffffffff0);
    __s_00 = (long *)((long)__s_00 + ((long)plVar2 + ~(ulong)__s_00 & 0xfffffffffffffff0) + 0x10);
  }
  if (__s_00 < (long *)((long)__s + uVar6 * 4)) {
    memset(__s_00,0,(long)__s + (uVar4 & 0xfffffffffffffffc) + ~(ulong)__s_00 + 4 &
                    0xfffffffffffffffc);
  }
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(__s,"hknpConvexShape");
  }
  __s[2] = 1;
  *(undefined4 *)(__s + 3) = 0x110201;
  __s[5] = 0;
  __s[6] = 0;
  *(undefined1 *)((long)__s + 0x1c) = 0;
  *(float *)(__s + 4) = param_2;
  __s[0xd] = 0;
  __s[9] = 0;
  __s[10] = 0;
  __s[0xb] = 0;
  __s[0xc] = 0;
  __s[7] = 0;
  __s[8] = 0x100000040;
  puVar1 = PTR_DAT_047e33a0 + 0x10;
  __s[0x10] = 0;
  *__s = (long)puVar1;
  puVar1 = PTR_DAT_047e3398;
  *(undefined4 *)(__s + 0x11) = 0;
  *(short *)(__s + 0xe) = (short)((uint)(param_2 * *(float *)puVar1 * 1.0039062) >> 0x10);
  __s[1] = 0x90;
  *param_1 = __s;
  return;
}


