/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed2708; name: FUN_02ed2708
 */


void FUN_02ed2708(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *__src;
  undefined *puVar2;
  void *__dest;
  long lVar3;
  long *plVar4;
  undefined8 local_28;
  
  *(undefined4 *)((long)param_1 + 0x1d) = 0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_0460dea0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar4 = param_1 + 10;
  *plVar4 = 0;
  puVar2 = PTR_DAT_047d1a08;
  param_1[0xb] = 0;
  local_28 = 0x100;
  __dest = (void *)(**(code **)puVar2)(0,&local_28,0);
  __src = (void *)0x0;
  if (*plVar4 != 0) {
    __src = (void *)(*plVar4 + (long)plVar4);
  }
  memcpy(__dest,__src,(long)*(int *)(param_1 + 0xb) << 7);
  if (*(int *)((long)param_1 + 0x5c) < 0) {
    lVar3 = 0;
    if (*plVar4 != 0) {
      lVar3 = *plVar4 + (long)plVar4;
    }
    (**(code **)(puVar2 + 8))(0,lVar3,0);
  }
  lVar3 = 0;
  if (__dest != (void *)0x0) {
    lVar3 = (long)__dest - (long)plVar4;
  }
  param_1[10] = lVar3;
  param_1[0xb] = 0x8000000200000002;
  puVar1 = (undefined8 *)(lVar3 + (long)plVar4);
  *(undefined2 *)(puVar1 + 0xe) = 0;
  puVar1[1] = 0x7f7fffee7f7fffee;
  *puVar1 = 0x7f7fffee7f7fffee;
  puVar1[3] = 0xff7fffeeff7fffee;
  puVar1[2] = 0xff7fffeeff7fffee;
  puVar1[5] = 0x7f7fffee7f7fffee;
  puVar1[4] = 0x7f7fffee7f7fffee;
  puVar1[7] = 0xff7fffeeff7fffee;
  puVar1[6] = 0xff7fffeeff7fffee;
  puVar1[9] = 0x7f7fffee7f7fffee;
  puVar1[8] = 0x7f7fffee7f7fffee;
  puVar1[0xb] = 0xff7fffeeff7fffee;
  puVar1[10] = 0xff7fffeeff7fffee;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  lVar3 = param_1[10];
  *(undefined8 *)((long)plVar4 + lVar3 + 0xe0) = 0;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xe8) = 0;
  *(undefined2 *)((long)plVar4 + lVar3 + 0xf0) = 0;
  *(undefined8 *)((long)plVar4 + lVar3 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar4 + lVar3 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}


