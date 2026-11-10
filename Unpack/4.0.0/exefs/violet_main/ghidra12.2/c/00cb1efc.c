/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb1efc; name: FUN_00cb1efc
 */


void FUN_00cb1efc(undefined8 *param_1,float param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *__s;
  ulong uVar5;
  long *__s_00;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_68;
  
  puVar3 = PTR_DAT_047d1a08;
  local_68 = 0xa0;
  __s = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  uVar4 = local_68;
  uVar6 = local_68 >> 2;
  if (((ulong)__s & 0xf) == 0) {
    __s_00 = __s;
    uVar5 = uVar6;
  }
  else {
    uVar5 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar2 = uVar6;
    if (uVar5 <= uVar6) {
      uVar2 = uVar5;
    }
    __s_00 = (long *)((long)__s + uVar2 * 4);
    uVar5 = uVar6 - uVar2;
    if (__s < __s_00) {
      memset(__s,0,uVar2 << 2);
    }
    else {
      __s_00 = __s;
    }
  }
  if ((3 < uVar5) && (0 < (long)(uVar5 & 0xfffffffffffffffc))) {
    plVar1 = (long *)((long)__s_00 + (uVar5 & 0xfffffffffffffffc) * 4);
    if (plVar1 <= __s_00 + 2) {
      plVar1 = __s_00 + 2;
    }
    memset(__s_00,0,(long)plVar1 + ~(ulong)__s_00 + 0x10 & 0xfffffffffffffff0);
    __s_00 = (long *)((long)__s_00 + ((long)plVar1 + ~(ulong)__s_00 & 0xfffffffffffffff0) + 0x10);
  }
  if (__s_00 < (long *)((long)__s + uVar6 * 4)) {
    memset(__s_00,0,(long)__s + (uVar4 & 0xfffffffffffffffc) + ~(ulong)__s_00 + 4 &
                    0xfffffffffffffffc);
  }
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(__s,"hknpConvexShape");
  }
  __s[2] = 1;
  *(undefined4 *)(__s + 3) = 0x410202;
  *(undefined2 *)(__s + 0xe) = 0x7f7f;
  __s[7] = 0;
  __s[8] = 0x200000040;
  puVar3 = PTR_DAT_047e34b0;
  *(float *)(__s + 4) = param_2;
  __s[5] = 0;
  __s[6] = 0;
  *(undefined1 *)((long)__s + 0x1c) = 0;
  __s[9] = 0;
  __s[10] = 0;
  __s[0xd] = 0;
  __s[0xb] = 0;
  __s[0xc] = 0;
  *__s = (long)(puVar3 + 0x10);
  __s[1] = 0xffffffff;
  lVar7 = param_3[1];
  __s[0x10] = *param_3;
  *(int *)(__s + 0x11) = (int)lVar7;
  puVar3 = PTR_DAT_047e3398;
  uVar8 = param_4[1];
  *(undefined8 *)((long)__s + 0x8c) = *param_4;
  *(int *)((long)__s + 0x94) = (int)uVar8;
  *(short *)(__s + 0xe) = (short)((uint)(*(float *)puVar3 * param_2 * 1.0039062) >> 0x10);
  __s[1] = 0xa0;
  *param_1 = __s;
  return;
}


