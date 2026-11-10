/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c5f70; name: FUN_012c5f70
 */


void FUN_012c5f70(undefined8 *param_1)

{
  long *local_70 [4];
  long *local_50;
  
  FUN_012c738c();
  *param_1 = &PTR_FUN_045a18a8;
  param_1[4] = &PTR_LAB_045a18d8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_012c6b88(param_1 + 8,param_1[1]);
  param_1[0x1612] = 0;
  *(undefined4 *)((long)param_1 + 0xb0a4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1613,0,1);
  *(undefined1 *)(param_1 + 0x1617) = 0;
  param_1[0x1615] = 0;
  param_1[0x1616] = 0;
  param_1[0x161c] = 0;
  param_1[0x1618] = 0;
  param_1[0x1619] = 0;
  param_1[0x161a] = 0;
  param_1[0x161b] = 0;
  FUN_012c6a18(param_1 + 0x161d);
  FUN_012c61dc(param_1 + 0x1621);
  *(undefined1 *)(param_1 + 0x1628) = 0;
  *(undefined1 *)(param_1 + 0x162a) = 0;
  *(undefined1 *)((long)param_1 + 0xb154) = 0;
  param_1[0x1630] = 0;
  param_1[0x162c] = 0;
  param_1[0x162d] = 0;
  param_1[0x162e] = 0;
  param_1[0x162f] = 0;
  *(undefined2 *)(param_1 + 0x1631) = 0xf06;
  *(undefined1 *)((long)param_1 + 0xb18a) = 0x2d;
  FUN_012c6220(param_1 + 0x1632);
  FUN_012c61a4(param_1 + 0x1639);
  param_1[0x1640] = 0;
  param_1[0x1641] = 0;
  *(undefined4 *)((long)param_1 + 0xb21c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1642,0,1);
  FUN_012c62f4(param_1 + 0x1644);
  FUN_012c62f4(param_1 + 0x164b);
  FUN_012c6264(param_1 + 0x1652);
  *(undefined1 *)(param_1 + 0x1659) = 0;
  *(undefined1 *)((long)param_1 + 0xb2cc) = 0;
  *(undefined1 *)(param_1 + 0x165a) = 0;
  param_1[0x165c] = 0;
  param_1[0x165d] = 0;
  param_1[0x165e] = 0;
  param_1[0x165f] = 0;
  FUN_012c6dbc(param_1 + 0x166c);
  FUN_012c7028(param_1 + 0x1676);
  FUN_012c62a8(param_1 + 0x1680);
  param_1[0x168c] = 0;
  param_1[0x168b] = 0;
  param_1[0x168a] = 0;
  FUN_012c6c44(param_1 + 0x168d);
  *(undefined1 *)(param_1 + 0x1691) = 0;
  param_1[0x1692] = 0;
  *(undefined4 *)((long)param_1 + 0xb4a4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1693,0,1);
  *(undefined1 *)(param_1 + 0x1695) = 0;
  FUN_012c6694(param_1 + 0x1696);
  param_1[0x169e] = 0;
  param_1[0x169f] = 0;
  param_1[0x16a0] = 0;
  FUN_012c74b8(local_70);
  FUN_012c6ad0(local_70);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  return;
}


