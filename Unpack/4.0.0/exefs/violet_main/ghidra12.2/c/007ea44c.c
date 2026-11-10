/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ea44c; name: FUN_007ea44c
 */


void FUN_007ea44c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_047d0e88;
  lVar3 = -0x1800;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 0x30;
    *(undefined4 *)(lVar1 + 0x1800) = *(undefined4 *)puVar2;
    *(undefined8 *)(lVar1 + 0x1804) = 0;
    *(undefined8 *)(lVar1 + 0x180c) = 0;
    *(undefined8 *)(lVar1 + 0x1814) = 0;
    *(undefined8 *)(lVar1 + 0x181c) = 0;
    *(undefined8 *)(lVar1 + 0x1828) = 0;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined4 *)(param_1 + 0x1880) = 0;
  *(undefined4 *)(param_1 + 0x18e0) = 0;
  *(undefined8 *)(param_1 + 0x1884) = 0;
  *(undefined8 *)(param_1 + 0x18e4) = 0;
  *(undefined4 *)(param_1 + 0x188c) = 0;
  *(undefined4 *)(param_1 + 0x18ec) = 0;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined8 *)(param_1 + 0x1800) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  *(undefined4 *)(param_1 + 0x1900) = 0;
  *(undefined8 *)(param_1 + 0x1908) = 0;
  return;
}


