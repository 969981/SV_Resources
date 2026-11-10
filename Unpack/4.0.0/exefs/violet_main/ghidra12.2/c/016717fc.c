/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016717fc; name: FUN_016717fc
 */


undefined8 * FUN_016717fc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_045d00e0;
  param_1[1] = &PTR_LAB_045d0200;
  param_1[2] = 0;
  puVar2 = param_1;
  if (DAT_04859d40 == 0) {
    puVar2 = (undefined8 *)FUN_01671900();
  }
  if ((param_3 < 0x421) || (-DAT_04859d48 - 0x420U <= param_3)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_01671980(param_2,param_3);
    *(undefined4 *)(puVar2 + 0x76) = 8;
    *(uint *)(puVar2 + 0x6e) = *(uint *)(puVar2 + 0x6e) & 0xfffffffd;
    puVar3 = puVar2;
  }
  param_1[4] = puVar3;
  param_1[5] = param_2;
  param_1[6] = param_3;
  if ((*(uint *)(puVar3 + 0x6e) >> 1 & 1) == 0) {
    *(uint *)(puVar3 + 0x6e) = *(uint *)(puVar3 + 0x6e) & 0xfffffffe;
  }
  else {
    uVar1 = pthread_mutex_lock((pthread_mutex_t *)(puVar3 + 0x6f));
    puVar2 = (undefined8 *)(ulong)uVar1;
    if ((uVar1 == 0) &&
       (uVar1 = *(uint *)(puVar3 + 0x6e), *(uint *)(puVar3 + 0x6e) = uVar1 & 0xfffffffe,
       (uVar1 >> 1 & 1) != 0)) {
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(puVar3 + 0x6f));
      puVar2 = (undefined8 *)(ulong)uVar1;
    }
  }
  *(ulong *)(param_1[4] + 0x368) = DAT_04859d50 & -DAT_04859d50;
  return puVar2;
}


